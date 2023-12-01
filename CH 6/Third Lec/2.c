#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("Enter number of table : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        fact *= i;

    printf("The factorial is %d", fact);

    return 0;
}