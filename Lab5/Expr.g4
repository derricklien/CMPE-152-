grammar Expr;

/*************
 * PARSER RULES
 *************/
prog: statements;

statements : statement*;

statement : expr |
			expr NEWLINE |
			assignment_statement |
			string_declare | //datatype
			bool_declare | //dataype
			int_declare | //datatype
			bootleg_for_loop | //loop
			if_statement | //conditional 
			function_call |
			function_declare
			; 

expr: 	'(' expr ')' |
		expr (MUL|DIV) expr |
		expr (PLUS|MINUS) expr | 
		expr (LESS_THAN|GREATER_THAN|LT_EQ|GT_EQ|EQEQ) expr |
		ID |
		INT
		;
		
assignment_statement: ID '=' expr ';';


// needs to replace var to include special characters and exclude "
string_declare: STRING VAR '=' '"'INT? VAR '"' ';';

bool_declare: BOOL VAR '=' (TRUE|FALSE) ';';

int_declare: INTEGER VAR '=' INT ';' ;

bootleg_for_loop: FOR '(' int_declare VAR LESS_THAN INT ';' VAR'++' ')' '{' statement '}';//FOR INT(statement)? ';';

if_statement: IF expr '{' statement* '}' ELSE ( if_statement | '{' statement* '}');

function_call: VAR '(' ')' ';';

function_declare: VAR '(' (bool_declare | ) ')' '{' statement '}' ';' ;

/*************
 * LEXER RULES
 *************/

/* OPERATORS */
PLUS: '+';
MINUS: '-';
MUL: '*';
DIV: '/';
LESS_THAN: '<';
GREATER_THAN: '>';
LT_EQ: '<=';
GT_EQ: '>=';
EQEQ: '==';

/* TYPES */
INT: DIGIT+;

/* NEWLINE AND WHITESPACE */
NEWLINE : '\r'? '\n' ->skip;
WS: (' ' | '\t')+ -> skip;

//Custom Keywords
FOR: 'Esketit';
IF: 'YallWhatIf';
ELSE: 'Fam';
STRING: 'Gucci';
BOOL: 'ForRealTho';
TRUE: 'YAASSS';
FALSE: 'Yikes';
FOURTWENTY: 'Lit';
INTEGER: 'int';

VAR: ID;
ID:	[a-zA-z]+;
DIGIT     : [0-9]+ ;

//prog: stat*;
//
//stat: expr NEWLINE
//	| ID '=' expr NEWLINE
//	| NEWLINE
//	;
//
//expr: expr ('*'|'/') expr
//	|expr ('+'|'-') expr
//	|INT
//	|ID
//	|'(' expr ')'
//	;
//	
//// Declarations	
//ID:	[a-zA-Z][a-zA-Z0-9]+;
//INT     : [0-9]+ ;	
//NEWLINE : [\n]+ ;
//WS: [ \t\r\n]+ -> skip;
//
//
////Custom Keywords
//For: 'Esketit';
//If: 'YallWhatIf';
//Else: 'Fam';
//String: 'Gucci';
//Bool: 'ForRealTho';
//True: 'YAASSS';
//False: 'Yikes';
//FourTwenty: 'Lit'; 
//
//// Statements
//stmt: bootleg_for_loop
//	| assignment
//	| if_statement
//	|
//	;
//	
//var : ID;
//assignment : var '=' expr';';
//
//// Loops
//bootleg_for_loop: For INT(stmt)?  ';'; 
//
//// Conditionals
//if_statement: If expr stmt (Else stmt)? ;
//
//// needs to replace var to include special characters and exclude "
//string_declare : String var '=' '"' INT? var '"' ';' ;
//
//bool_declare:Bool var'='(True|False)';';
//
//function_declare: var (bool_declare | ) '{' stmt '}' ';' ;
//
//function_call: var '(' (bool_declare | ) ')' ';' ;
