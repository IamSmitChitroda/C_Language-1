#include <stdio.h>

int main() {
    int size1 , size2;
    printf("Enter first array size : ");
    scanf("%d",&size1);
    printf("Enter second array size : ");
    scanf("%d",&size2);
    
    int a[size1] , b[size2];
    
    for(int i=0 ;i<size1 ;i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    for(int i=0 ;i<size2 ;i++)
    {
        printf("Enter b[%d] : ",i);
        scanf("%d",&b[i]);
    }

    int c[size1 + size2];
    
    for(int i=0 ;i<size1 ;i++)
        c[i] = a[i];

    for(int i=0 ;i<size2;i++)
        c[size1 + i] = a[i];

    printf("\n\n----:Merge Of Array:----\n");
    
    for(int i=0 ;i<size1 + size2;i++)    
        printf("%d ",c[i]);
    
  return 0;
}
