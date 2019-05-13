grammar Pcl2;  // A tiny subset of Pascal

@header {
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}

program   : header mainBlock '.' ;
header    : PROGRAM IDENTIFIER ';' ;
mainBlock : block;
block     : declarations compoundStmt ;

declarations : VAR declList ';' ;
declList     : decl ( ';' decl )* ;
decl         : varList ':' typeId ;
varList      : varId ( ',' varId )* ;
varId        : IDENTIFIER ;
typeId       : IDENTIFIER ;

compoundStmt : BEGIN stmtList END ;

stmt : compoundStmt
     | assignmentStmt
     | while_stmt
     | if_stmt 
     |
     ;
     
stmtList       : stmt ( ';' stmt )* ;
assignmentStmt : variable ':=' expr ;
while_stmt     : WHILE '(' expr ')' expr ;
if_stmt         : IF '(' expr ')'  stmt;

expr locals [ TypeSpec *type = nullptr ]
    : expr mulDivOp expr   # mulDivExpr
    | expr addSubOp expr   # addSubExpr
    | expr rel_op expr     # relationalExpr
    | number               # unsignedNumberExpr
    | signedNumber         # signedNumberExpr
    | variable             # variableExpr
    | '(' expr ')'         # parenExpr
    ;
     
mulDivOp : MUL_OP | DIV_OP ;
addSubOp : ADD_OP | SUB_OP ;
rel_op   : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ;
     
signedNumber locals [ TypeSpec *type = nullptr ] 
    : sign number 
    ;
sign : ADD_OP | SUB_OP ;

variable : IDENTIFIER ;

number locals [ TypeSpec *type = nullptr ]
    : INTEGER    # integerConst
    | FLOAT      # floatConst
    ;

PROGRAM : 'PROGRAM' ;
VAR     : 'VAR' ;
BEGIN   : 'BEGIN' ;
END     : 'END' ;
UNTIL	: 'UNTIL' ;
IF		: 'IF' ;
THEN	: 'THEN' ;
ELSE	: 'ELSE' ;
WHILE   : 'WHILE' ;


IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
INTEGER    : [0-9]+ ;
FLOAT      : [0-9]+ '.' [0-9]+ ;

MUL_OP :   '*' ;
DIV_OP :   '/' ;
ADD_OP :   '+' ;
SUB_OP :   '-' ;

EQ_OP : '==' ;
NE_OP : '<>' ;
LT_OP : '<' ;
LE_OP : '<=' ;
GT_OP : '>' ;
GE_OP : '>=' ;

NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ; 
