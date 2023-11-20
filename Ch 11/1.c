#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i <= 5; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &a[i]);
    }

    int *pointer;

    for (int i = 0; i < 5; i++)
    {
        pointer = &a[i];
        printf("Array [%d] : %d\n", i, (*pointer) * (*pointer));
    }

    return 0;
}
