#include<stdio.h>
main(){
	int x,y;
	printf("Enter X :");
	scanf("%d",&x);
	printf("Enter Y :");
	scanf("%d",&y);
	
	int *ptr1,*ptr2,z;
	
	ptr1 = &x;
	ptr2 = &y;
	
	   z = *ptr1;
	   *ptr1 = *ptr2;
	   *ptr2 = z;
	   
	printf("value of x:%d\n",*ptr1);
	printf("value of y:%d\n",*ptr2);   
	
	
	
}
