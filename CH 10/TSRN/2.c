#include <stdio.h>

void check(int n)
{
    n % 3 == 0 && n % 5 == 0
        ? printf("Given number is divisible by both 3 & 5")
        : printf("Given number is not  divisible by both 3 & 5");
}

int main()
{
    int n;

    printf("Enter any number : ");
    scanf("%d", &n);

    check(n);

    return 0;
}
