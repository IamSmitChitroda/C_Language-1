#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main(){
	int a1,a2;
	clrscr();

	P("Enter both Angle : ");
	S("%d%d",&a1,&a2);

	P("Third Angle : %d",180-(a1+a2));
	getch();
}