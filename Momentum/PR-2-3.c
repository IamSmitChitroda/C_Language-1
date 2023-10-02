#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main(){
	int a,b,c,d;
	P("Enter A : ");
	S("%d",&a);
	P("Enter B : ");
	S("%d",&b);
	P("Enter C : ");
	S("%d",&c);
	P("Enter D : ");
	S("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
				P("A is big.");
			
			else
				P("D is big");
			
		}
		else
		{
			if(c>d)	
				P("C is big");
			else
				P("D is big");
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
				P("B is big");
			else
				P("D is big");
		}
		else
		{
			if(c>d)
				P("C is big");
			else
				P("D is big");
		}
	}
		
}
