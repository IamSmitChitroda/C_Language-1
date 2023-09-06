#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main(){
	int a,b;
	clrscr();

	P("Enter two number : ");
	S("%d%d",&a,&b);
	P("(a+b)^2 : %d",(a*a)-(2*a*b)+(b*b) );

	getch();
}