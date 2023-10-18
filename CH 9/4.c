#include <stdio.h>
int main()
{
    char a[50];
    printf("Enter any sentence : ");
    scanf("%[^\n]", &a);

    if (a[0] >= 97 && a[0] <= 122)
        a[0] - 32;

    for (int i = 1; i < 50; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
            a[i] += 32;
    }
    printf("\n\n----:Tital Case:----\n\n");
    printf("%s", a);
    return 0;
}
