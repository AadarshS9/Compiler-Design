%{ 
#include<stdio.h>
int vcount=0;
int ccount=0;
%}

%%
[aeiouAEIOU] {vcount++; printf("%s is a vowel\n",yytext);}
[a-zA-Z] {ccount++; printf("%s is a consonant\n",yytext);}
[\t\n];
<<EOF>> {
        return 0; }

%%

int main()
{
	printf("Enter string: ");
	yylex();
	printf("Vowel count: %d",vcount);
	printf("Consonant count: %d",ccount);
	
}

int yywrap()
{
	return 1;
}


