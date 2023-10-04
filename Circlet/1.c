#include<stdio.h>
#define P printf
void main(){
	int i,j;
	for(i=41 ;i<=45 ;i++){
		for(j=41 ;j<=i ;j++)
			P("%d",j);
		P("\n");
	}
}
