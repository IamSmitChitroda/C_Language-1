#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int a,b,c,d;
	clrscr();

	P("Enter 4 value : ");
	S("%d%d%d%d",&a,&b,&c,&d);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				P("A is Big !!");
			}
			else
			{
				P("D is Big !!");
			}
		}
		else
		{
			if(c>d)
			{
				P("C is Big !!");
			}
			else
			{
				P("D is Big !!");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				P("B is Big !!");
			}
			else
			{
				P("D is Big !!");
			}
		}
		else
		{
			if(c>d)
			{
				P("C is Big !!");
			}
			else
			{
				P("D is Big !!");
			}
		}
	}

	getch();
}