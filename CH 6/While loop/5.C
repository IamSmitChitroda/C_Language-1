#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
	int y1,y2;
	clrscr();
	P("Enter first year : ");
	S("%d",&y1);
	P("Enter secoend year : ");
	S("%d",&y2);

	while(y1<=y2)
	{
	      if(y1%4==0)
		    P("%d\t",y1);

	      y1++;
	}
	getch();
}