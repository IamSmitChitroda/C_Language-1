#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main(){
	int n;
	clrscr();

	P("Enter number : ");
	S("%d",&n);
	P("%d * 1 : %d\n",n,n);
	P("%d * 2 : %d\n",n,n*2);
	P("%d * 3 : %d\n",n,n*3);
	P("%d * 4 : %d\n",n,n*4);
	P("%d * 5 : %d\n",n,n*5);
	P("%d * 6 : %d\n",n,n*6);
	P("%d * 7 : %d\n",n,n*7);
	P("%d * 8 : %d\n",n,n*8);
	P("%d * 9 : %d\n",n,n*9);
	P("%d * 10 : %d\n",n,n*10);

	getch();
}