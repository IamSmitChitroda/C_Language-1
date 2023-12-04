#include<stdio.h>

int Rsum(int n,int i, int sum)  {
	
	
	if(i <= n) {
		sum+=i;
		i++;
		Rsum(n,i,sum);
	}
	else
		return sum;
		
}

 main () {
 	
 	int n;
 	printf("Enter number : ");
 	scanf("%d", &n);
 	
 	printf("Sum = %d",Rsum(n , 1, 0));
 }