#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i,j,n=1;
	clrscr();

	for(i=1 ;i<=5 ;i++){
		for(j=i ;j>=1 ;j--){
			P("%d ",n++);
		}
		P("\n");
	}
	getch();
}