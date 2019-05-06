.class public sample
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; i,j:integer

.field private static i I
.field private static j I

; alpha,beta5x:real

.field private static alpha F
.field private static beta5x F

.method public <init>()V

	aload_0
	invokenonvirtual    java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method public static main([Ljava/lang/String;)V

	new RunTimer
	dup
	invokenonvirtual RunTimer/<init>()V
	putstatic        sample/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        sample/_standardIn LPascalTextIn;

; i:=3

	ldc	3
	putstatic	sample/i I

; j:=1

	ldc	1
	putstatic	sample/j I

; IFi<=jTHENi:=j

	getstatic	sample/i I
	getstatic	sample/j I

; i:=j

	getstatic	sample/j I
	putstatic	sample/i I

; REPEATi:=i+1UNTILi=5


; i:=i+1

	getstatic	sample/i I
	ldc	1
	iadd
	putstatic	sample/i I
	getstatic	sample/i I
	ldc	5

; 


	getstatic     sample/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
