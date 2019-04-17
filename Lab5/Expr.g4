grammar Expr;

prog:string_declare 
	 
	 //make it so that each one can run without affecting the other
	 //bool_declare
	 //function_declare
	 //function_call
	 stat*;
	
	
	
	 
// needs to replace var to include special characters and exclude "
string_declare : String var '=' '"'INT? var '"' ';';

bool_declare : Bool var '=' (True | False)';' ;

function_declare: var (bool_declare | ) '{' stat '}' ';' ;

function_call: var '(' (bool_declare | ) ')' ';' ;

stat: expr NEWLINE
	| ID '=' expr NEWLINE
	| NEWLINE
	| bootleg_for_loop
	| assignment
	| if_statement
	;

expr: expr ('*'|'/') expr
	|expr ('+'|'-') expr
	|INT
	|ID
	|'(' expr ')'
	;

//Custom Keywords
For: 'Esketit';
If: 'YallWhatIf';
Else: 'Fam';
String: 'Gucci';
Bool: 'ForRealTho';
True: 'YAASSS';
False: 'Yikes';
FourTwenty: 'Lit'; 
	
// Declarations	
ID:	[a-zA-Z][a-zA-Z0-9]+;
INT     : [0-9]+ ;	
NEWLINE : [\r\n]+ ;
WS: [\t]+ -> skip;

var : ID;
assignment : var '=' expr';';

// Loops
bootleg_for_loop: For INT(stat)?  ';'; 

// Conditionals
if_statement: If expr stat (Else stat)? ;




