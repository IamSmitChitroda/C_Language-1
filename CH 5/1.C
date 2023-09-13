#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main(){
	int a,b;
	clrscr();
	P("Enter two number : ");
	S("%d%d",&a,&b);

	if(a<b){
		P("A is small !!");
	}
	else{
		P("B is small !!");
	}

	getch();
}