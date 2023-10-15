%{ 
#include<stdio.h>
#include<stdlib.h>
%} 
%token LET DIG 
%% 
	variable:var
	; 
	var:var DIG 
	|var LET 
	|LET 
	; 
%% 
int main()
{
	printf("Kindly enter the identifier: ");
	yyparse();
	printf("Valid Variable \n");
	return 0; 
}
int yyerror()
{ 
	printf("Invalid Variable \n"); 
	exit(0); 
} 
