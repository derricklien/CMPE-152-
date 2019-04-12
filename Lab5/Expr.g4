grammar Expr;

/*
 	• Regular expressions that define your language tokens.
	• Expressions with numeric constants and scalar variables. (No type checking and no arrays or records yet for this assignment.)
	• Assignment statements.
	• Conditional statements (at least one, such as IF).
	• Looping statements (at least one).
	• Variable declarations (at least two datatypes).
	• Procedure and function declarations with value or reference parameters.
	• Procedure and function calls.
	• Type definitions. (Do later, not for this assignment.)
 */

prog: (expr NEWLINE)* ;
expr: expr ('*'|'/') expr | 
		expr ('+'|'-') expr | INT | '(' expr ')';
NEWLINE: [\r\n]+;
INT: [0-9]+;
variable : IDENTIFIER ;
compound_stmt : '{' stmt_list '}' ;
stmt_list       : stmt ( ';' stmt )* ;
stmt : compound_stmt    # compoundStmt
     | assignment_stmt  # assignmentStmt
     |                  # emptyStmt
     ;
     

assignment_stmt : variable '=' expr ';';
//if_stmt         : IF expr THEN stmt ( ELSE stmt )? ;


IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
INTEGER    : [0-9]+ ;

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