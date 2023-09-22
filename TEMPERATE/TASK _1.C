#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
	char alfabet= 'a';
	clrscr();
	do
	{
		P("%c ",alfabet);
	       alfabet+=4;
	}while(alfabet<='z')

	getch();
}

