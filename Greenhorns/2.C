#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main(){
	float Bsalary,HRA,DA,TA;
	clrscr();

	P("Enter base salary : ");
	S("%f",&Bsalary);

	HRA=(Bsalary*0.1);
	DA=(Bsalary*0.05);
	TA=(Bsalary*0.08);

	P("Rs. : %.2f",(Bsalary+HRA+DA+TA));
	getch();
}