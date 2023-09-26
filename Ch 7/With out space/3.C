#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i,j;
	clrscr();

	for(i=5 ;i>=1 ;i--){
		for(j=i ;j<=5 ;j++){
			P("%d",i);
		}
		P("\n");
	}
	getch();
}