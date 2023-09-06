#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main(){
	int a,b,z;
	clrscr();
	P("Enter two number : ");
	S("%d%d",&a,&b);
	P("a=%d\nb=%d",a,b);
	z=a;
	a=b;
	b=z;
	P("\na=%d\nb=%d",a,b);
	getch();
}