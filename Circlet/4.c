#include<stdio.h>
#define P printf
void main(){
	int i,j,s;
	for(i=5 ;i>=1 ;i--){
		for(s=1 ;s<=5-i ;s++)
			P(" ");
		for(j=1 ;j<=i ;j++){
			j%2==1
			? P("1")
			: P("0");
		}
		P("\n");
	}
}
