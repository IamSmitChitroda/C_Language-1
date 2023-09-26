#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	char i,j;
	clrscr();

	for(i='A' ;i<='E' ;i++){
		for(j=i ;j>='A' ;j--){
			P("%d",j);
		}
		P("\n");
	}
	getch();
}