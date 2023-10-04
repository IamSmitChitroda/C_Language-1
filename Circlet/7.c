#include<stdio.h>
#define P printf
void main(){
	int i,j;
	for(i=5 ;i>=1 ;i--){
		for(j=1 ;j<=5 ;j++){
			(i==5)||(i==3)||(j==1)||(j==5)
			? P("*")
			: P(" ");
		}
		P("\n");
	}
}
