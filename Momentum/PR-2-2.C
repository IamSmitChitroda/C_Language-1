#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
	int a;
	clrscr();
	P("Enter any number : ");
	S("%d",&a);

	a%2==0
	? P("Even number !!")
	: P("Odd number !!");
	getch();
}

