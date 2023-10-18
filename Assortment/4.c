#include <stdio.h>

main()
{

    int r, c;
    printf("enter row: ");
    scanf("%d", &r);
    printf("enter column: ");
    scanf("%d", &c);

    int a[r][c];
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {

            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\nmatrix\n\n");

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {

            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    int row, col;
    printf("enter the sum of row: ");
    scanf("%d", &row);
    printf("enter the sum of column: ");
    scanf("%d", &col);

    int rowSum = 0;
    for (int j = 0; j < c; j++)
    {
        rowSum += a[row][j];
    }

    int colSum = 0;
    for (int i = 0; i < r; i++)
    {
        colSum += a[i][col];
    }

    printf("Sum of elements in row %d: %d\n", row, rowSum);
    printf("Sum of elements in column %d: %d\n", col, colSum);
}
