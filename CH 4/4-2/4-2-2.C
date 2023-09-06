#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main(){
	int a,b;
	clrscr();
	P("Enter two number : ");
	S("%d%d",&a,&b);
	P("a=%d\nb=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;


	P("\na=%d\nb=%d",a,b);
	getch();
}