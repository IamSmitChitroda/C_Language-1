#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter X :");
    scanf("%d", &x);
    printf("Enter Y :");
    scanf("%d", &y);

    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    *ptr2 = *ptr1 * *ptr2;
    *ptr1 = *ptr2 / *ptr1;
    *ptr2 = *ptr2 / *ptr1;

    printf("value of x:%d\n", *ptr1);
    printf("value of y:%d\n", *ptr2);

    return 0;
}
