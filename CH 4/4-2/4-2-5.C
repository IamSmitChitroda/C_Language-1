#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main(){
	int a,b;
	clrscr();

	P("Enter two number : ");
	S("%d%d",&a,&b);
	P("(a+b)^3 : %d",(a*a*a)+(3*a*a*b)+(3*a*b*b)+(b*b*b) );

	getch();
}