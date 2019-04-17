grammar Expr;

prog: stat*;

stat: expr NEWLINE
	| ID '=' expr NEWLINE
	| NEWLINE
	;

expr: expr ('*'|'/') expr
	|expr ('+'|'-') expr
	|INT
	|ID
	|'(' expr ')'
	;
	
// Declarations	
ID:	[a=zA-Z][a-zA-Z0-9]+;
INT     : [0-9]+ ;	
NEWLINE : [\r\n]+ ;
WS: [\t]+ -> skip;


//Custom Keywords
For: 'Esketit';
If: 'YallWhatIf';
Else: 'Fam';
String: 'Gucci';
Bool: 'ForRealTho';
True: 'YAASSS';
False: 'Yikes';
FourTwenty: 'Lit'; 

// Statements
stmt: bootleg_for_loop
	| assignment
	| if_statement
	|
	;
	
var : ID;
assignment : var '=' expr';';

// Loops
bootleg_for_loop: For INT(stmt)?  ';'; 

// Conditionals
if_statement: If expr stmt (Else stmt)? ;

// needs to replace var to include special characters and exclude "
string_declare : String var '=' '"' INT? var '"' ';' ;

bool_declare : Bool var '=' (True | False)';';

function_declare: var (bool_declare | ) '{' stmt '}' ';' ;

function_call: var '(' (bool_declare | ) ')' ';' ;
