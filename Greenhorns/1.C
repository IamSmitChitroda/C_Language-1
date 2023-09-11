#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main(){
	float c,f;
	clrscr();

	P("Enter the temprature in Celcius : ");
	S("%f",&c);

	f=(c*(9/5))+32;

	P("The temprature in Fahrenhelt : %.2f",f);
	getch();
}