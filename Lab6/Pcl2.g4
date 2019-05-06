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
     | if_stmt 
     |
     ;
     
stmtList       : stmt ( ';' stmt )* ;
assignmentStmt : variable ':=' expr ;
if_stmt         : IF expr THEN stmt ( ELSE stmt )? ;

variable : IDENTIFIER ;

expr locals [ TypeSpec *type = nullptr ]
    : expr mulDivOp expr   
    | expr addSubOp expr  
    | expr rel_op expr    
    | number             
    | signedNumber       
    | variable            
    | '(' expr ')'     
    ;
     
mulDivOp : MUL_OP | DIV_OP ;
addSubOp : ADD_OP | SUB_OP ;
rel_op     : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ;
     
signedNumber locals [ TypeSpec *type = nullptr ] 
    : sign number 
    ;
sign : ADD_OP | SUB_OP ;

number locals [ TypeSpec *type = nullptr ]
    : INTEGER   
    | FLOAT     
    ;

PROGRAM : 'PROGRAM' ;
VAR     : 'VAR' ;
BEGIN   : 'BEGIN' ;
END     : 'END' ;
IF      : 'IF' ;
THEN    : 'THEN' ;
ELSE    : 'ELSE';

IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
INTEGER    : [0-9]+ ;
FLOAT      : [0-9]+ '.' [0-9]+ ;

MUL_OP :   '*' ;
DIV_OP :   '/' ;
ADD_OP :   '+' ;
SUB_OP :   '-' ;

EQ_OP : '=' ;
NE_OP : '<>' ;
LT_OP : '<' ;
LE_OP : '<=' ;
GT_OP : '>' ;
GE_OP : '>=' ;

NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ; 
