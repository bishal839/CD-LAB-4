#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i=0,f=0;
char buff[100];
void S();
void A();
void B();
void C();
void D();

void S()
{
	if(buff[i]=='a')
	{
		i++;
		A();
		B();
	}
	else if(buff[i]=='b')
	{
		i++;
		B();
	}
	else if(buff[i]=='c')
	{
		i++;
		C();
		D();
	}
	else if(buff[i]=='d')
	{
		i++;
		D();
	}
	else 
		f=1;
}
void A()
{
	if(buff[i]=='a')
	{	
		i++;
		A();
	}
	else if(buff[i]=='b')
	{
		i++;
	}
	else 
		f=1;
}

void B()
{
	if(buff[i]=='b')
	{	
		i++;
		B();
	}
	else if(buff[i]=='c')
	{
		i++;
	}
	else 
		f=1;
}
void C()
{
	if(buff[i]=='c')
	{	
		i++;
		C();
	}
	else if(buff[i]=='d')
	{
		i++;
	}
	else 
		f=1;
}
void D()
{
	if(buff[i]=='d')
	{	
		i++;
		D();
	}
	else if(buff[i]=='e')
	{
		i++;
	}
	else 
		f=1;
}
int main()
{
	int l;
	printf("Enter The String:");
	scanf("%s",buff);
	l=strlen(buff);
	
	S();
	
	if((l==i)&&(f==0))
	{
		printf("String Parsed Successfully.");
	}
	else
	{
		printf("String rejected.");
	}
	return 0;
}
