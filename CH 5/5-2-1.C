#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int a,b,c;
	clrscr();

	P("Enter 3 value : ");
	S("%d%d%d",&a,&b,&c);

	if(a<b)
	{
		if(a<c)
		{
			P("A is small !!");
		}
		else
		{
			P("C is small !!");
		}
	}
	else
	{
		if(b<c)
		{
			P("B is small !!");
		}
		else
		{
			P("C is small !!");
		}
	}

	getch();
}