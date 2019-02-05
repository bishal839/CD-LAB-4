%{
	#include<stdio.h>
	#include<stdlib.h>
	int v=0,c=0;
%}
%%
[aeiouAEIOU] {v++;}
[a-zA-Z] {c++;}

%%
void main()
{
	printf("Enter A string:");
	yylex();
	
	printf("No. Of Vowels:%d\n",v);
	printf("No of Consonent:%d\n",c);
}
