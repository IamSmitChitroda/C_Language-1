#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main(){
	float l,b;
	clrscr();
	P("Enter length and witch of rectangle : ");
	S("%f%f",&l,&b);
	P("Area of rectangle : %.2f",l*b);

	getch();
}