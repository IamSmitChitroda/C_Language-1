#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter number of table : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;

    printf("The sum of all numbers : %d", sum);

    return 0;
}