#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i,j;
	clrscr();

	for(i=1 ;i<=5 ;i++){

		for(j=1 ;j<=i ;j++){
			j%2==0
			? P("0")
			: P("1");

		}
		P("\n");
	}
	getch();
}