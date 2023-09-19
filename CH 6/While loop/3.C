#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
	int a=1,n;
	clrscr();
	P("Enter any number : ");
	S("%d",&n);
	while(a<=n)
		P("%d\n",a++);
	getch();
}