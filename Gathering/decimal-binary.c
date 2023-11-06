#include <stdio.h>

void Binary(int n)
{
    int binary[32], i;

    if (n == 0)
        printf("The Binary value is : 0\n");

    for (i = 0; n > 0; i++)
    {
        binary[i] = n % 2;
        n = n / 2;
    }

    printf("The Binary value is : ");
    int number;
    for (number = i - 1; number >= 0; number--)
    {
        printf("%d", binary[number]);
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    Binary(n);

    return 0;
}
