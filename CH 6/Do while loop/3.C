#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
	int i=1,n;
	clrscr();
	P("Enter number of table : ");
	S("%d",&n);

	do
	     P("%d * %d = %d\n",n,i++,n*i);
	while(i<=10);

	getch();
}