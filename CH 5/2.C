#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main(){
	int n;
	clrscr();
	P("Enter number : ");
	S("%d",&n);

	if(n>0){
		P("Positive number !!");
	}
	else if(n==0){
		P("Netural number !!");
	}
	else{
		P("Negative number !!");
	}

	getch();
}