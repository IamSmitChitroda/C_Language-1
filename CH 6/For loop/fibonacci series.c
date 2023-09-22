#include<stdio.h>
#define P printf
#define S scanf

void main(){
	int n,n1=0,n2=1,n3,i;
	P("Enter the number : ");
	S("%d",&n);
	
	for(i=0 ;i<=n ;i++){

		P("%d , ",n1);
		
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
}
