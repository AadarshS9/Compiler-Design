%{
#include<stdio.h>
#include<stdlib.h>
%} 
%token ID DIG 
%left '+''-' 
%left '*''/' 
%right UMINUS 
%% 
	stmt:expn ; 
	expn:expn'+'expn 
	|expn'-'expn 
	|expn'*'expn 
	|expn'/'expn 
	|'-'expn %prec UMINUS 
	|'('expn')' 
	|DIG 
	|ID
	;
%%
int main()
{
	 printf("Kindly enter the Expression: "); 
	 yyparse(); 
	 printf("Valid Expression \n"); return 0;
} 
int yyerror() 
{
	printf("Invalid Expression\n"); exit(0); 
} 
