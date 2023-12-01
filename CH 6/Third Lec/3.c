#include <stdio.h>

int main()
{
    int i = 1, n;

    printf("Enter number of table : ");
    scanf("%d", &n);

    do
        printf("%d * %d = %d\n", n, i++, n * i);
    while (i <= 10);

    return 0;
}