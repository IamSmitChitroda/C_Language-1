#include<stdio.h>
#define P printf

void main(){
	int i,j,s;
	
	for(i=1 ;i<=5 ;i++){
		
		for(s=1 ;s<=i-1 ;s++)
			P(" ");
		
		for(j=5 ;j>=i ;j--)
			P("%d",j);
	
		P("\n");
	}
	
}
