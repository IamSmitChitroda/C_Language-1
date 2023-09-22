#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
	int n,FD,LD;
	clrscr();

	P("Enter n : ");
	S("%d",&n);
	LD = n%10;

	while(n>=10)
	{
		n=n/10;
	}
	FD=n;
	
	P("The First and second both number sum : %d ",LD + FD);

	getch();
}
