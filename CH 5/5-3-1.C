#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
	int a,b,c,min;
	clrscr();
	P("Enter 3 value : ");
	S("%d%d%d",&a,&b,&c);

	min = a<b
		? a<c
		      ? a
		      : c
		: b<c
		      ? b
		      : c;
	P("%d is small value !!");
	getch();
}