#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
	int n,a=0;
	clrscr();

	P("Enter n : ");
	S("%d",&n);

	while(n!=0)
	{
		n=n/10;
		a++;
	}

	P("The number of digit : %d",a);

	getch();
}
