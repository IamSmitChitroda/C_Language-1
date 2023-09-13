#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main(){
	char a;
	clrscr();
	P("Enter any charecter : ");
	S("%c",&a);

	if(a=='a' || a=='A' || a=='E' || a=='e' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U' ){
		P("It's Vowel character!!");
	}

	else{
		P("It's console character!!");
	}

	getch();
}