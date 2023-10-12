#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter Row size : ");
    scanf("%d", &r);
    printf("Enter column size : ");
    scanf("%d", &c);

    int a[r][c], sum = 0;
    printf("\n\n----:Array A:----\n\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if ((i == 0) || (j == 0) || (i == r - 1) || (j == c - 1))
            {
                printf("%d ", a[i][j]);
                sum += a[i][j];
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("The sum of boundary elements of an Array : %d", sum);
    return 0;
}
