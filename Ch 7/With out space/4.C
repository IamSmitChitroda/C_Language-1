#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i,j;
	clrscr();

	for(i=1 ;i<=5 ;i++){
		for(j=i ;j<=5 ;j++){
			P("%d",j);
		}
		P("\n");
	}
	getch();
}