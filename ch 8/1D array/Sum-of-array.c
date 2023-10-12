#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of Arary : ");
    scanf("%d", &size);

    int a[size],b[size],c[size];

    printf("----:Array a:----");
    for (int i = 0; i < size; i++)
    {
        printf("\n\nEnter array a[%d]", i);
        scanf("%d", &a[i]);
    }
   
    printf("\n\n----:Array b:----");
    for (int i = 0; i < size; i++)
    {
        printf("Enter array b[%d]", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size; i++)
    {
        c[i]=a[i]+b[i];
    }

    for ( int i = 0; i < size; i++)
    {
        printf("Array : %d",c[i]);
    }
    
    
    return 0;
}
