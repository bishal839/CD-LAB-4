%{
	#include<stdio.h>
	#include<stdlib.h>
%}

%%
[ \t]+   {;}
void  |
for   |
while |
int		{printf("%s is a keyword.\n",yytext);}
	
[a-zA-Z]+	{printf("%s is an Identifier.\n",yytext);}
%%

void main()
{
	printf("Enter a String:");
	yylex();
}
