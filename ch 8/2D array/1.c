#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter Row size : ");
    scanf("%d", &r);
    printf("Enter column size : ");
    scanf("%d", &c);

    int a[r][c], sum = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter Array[%d][%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            sum += a[i][j];
    }

    int ave = sum / (r * c);

    printf("\n\nAverage of an Array : %d", ave);
    return 0;
}
