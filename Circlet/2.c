#include<stdio.h>
#define P printf
void main(){
	int i,j,n=11;
	for(i=1 ;i<=5 ;i++){
		for(j=1 ;j<=i ;j++)
			P("%d",n++);
		P("\n");
	}
}
