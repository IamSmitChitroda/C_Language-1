#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter Row size : ");
    scanf("%d", &r);
    printf("Enter column size : ");
    scanf("%d", &c);

    int a[r][c], b[r][c], z[r][c];

    printf("\n\n----:Array A:----\n\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\n----:Array B:----\n\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            z[i][j] = a[i][j] + b[i][j];
    }

    printf("\n\n----:Sum Of Both Array:----\n\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", z[i][j]);
        printf("\n");
    }

    return 0;
}
