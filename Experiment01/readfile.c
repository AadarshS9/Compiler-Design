#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>

 
int main()
{
    FILE* ptr;
    FILE* ptr2;
    char ch;

   int i=0;
   int j=0;
   int k=0;
   int m=0;
   int count=1;
   char variable[50],operator[50],punctuation[50],numeric[50]={};
   char str[50];
   char keyword[50]={"if","else","int","while","double","long","do"};
   
   
    ptr = fopen("text.txt", "r");
    ptr2 = fopen("text.txt", "r");
    
 
    if (NULL == ptr)
    {
        printf("The file cannot be opened. Sorry\n");
    }
 
    printf("The content of this file are as follows: \n");
    do{
	ch = fgetc(ptr);
	printf("%c", ch);
   	
	if(isalpha(ch)!=0)
	{
		variable[i]=ch;
		i++;	
	}
	
	if(ch =='+' || ch=='-' || ch=='*' || ch=='/' ||ch=='^' ||ch=='=')
	{
		operator[j]=ch;
		j++;	
	}
	
	if(ch =='.' || ch==',' || ch=='!' || ch==':' ||ch==';')
	{
		punctuation[k]=ch;
		k++;	
	}
	
	if(isdigit(ch)!=0)
	{
		numeric[m]=ch;
		m++;
       	}
       	
    }while (ch != EOF);
	
	printf("\rLEXEMC\t\t\tTOKEN\t\t\t\tLINENO");
	for(int i=0;variable[i]!='\0';i++)
	{
		printf("\n%c\t\t\tIDENTIFIER\t\t\t1",variable[i]);
	}

	for(int i=0;operator[i]!='\0';i++)
	{
		printf("\n%c\t\t\tOPERATOR\t\t\t1",operator[i]);
	}

	for(int i=0;punctuation[i]!='\0';i++)
	{
		printf("\n%c\t\t\tPUNCTUATION\t\t\t1",punctuation[i]);
	}

	for(int i=0;numeric[i]!='\0';i++)
	{
		printf("\n%c\t\t\tNUMERIC\t\t\t\t1",numeric[i]);
	}
	
	while ( fscanf(ptr2,"%s", str) == 1)
                {
                	if(strstr(str, keyword)!=0)
                                printf("\n%s\t\t\tKEYWORD\t\t\t\t1",keyword);
                        }
                }
  	printf("\n");
    fclose(ptr);
    fclose(ptr2);
    return 0;
}
