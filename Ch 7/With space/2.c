#include<stdio.h>
#define P printf

void main(){
	int i,j,s;
	
	for(i=5 ;i>=1 ;i--){
		
		for(s=1 ;s<=i-1 ;s++)
			P(" ");
		
		for(j=i ;j<=5 ;j++)
			P("%d",j);
		
		P("\n");
	}
	
}
