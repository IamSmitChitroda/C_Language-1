#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
	char a;
	clrscr();
	P("Enter a : ");
	S("%c",&a);

	if((a>='a'&&a<='z') || (a>='A'&&a<='Z'))
	{
		P("Charachter !!");
	}
	else if(a>=0)
	{
		P("Digit !!");
	}
	else
	{
		P("Synboll !!");
	}
	getch();
}

