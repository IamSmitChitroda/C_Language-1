#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main(){
	float i,p,r,n;
	clrscr();
	P("Enter princple , rate of interest and time : ");
	S("%f%f%f",&p,&r,&n);
	i=p*r*n/100;
	P("Interest : %.2f",i);
	getch();
}