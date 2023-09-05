#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
#define pi 3.14

void main(){
	float r;
	clrscr();
	P("Enter radius of circle : ");
	S("%f",&r);
	P("Perameter : %.2f",2*pi*r);

	getch();
}