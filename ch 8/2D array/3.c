#include <stdio.h>
#define P printf
#define S scanf

int main()
{
    int r, c;
    P("Enter Row size.");
    S("%d", &r);
    P("Enter coloumn size.");
    S("%d", &c);

    int i, j, a[r][c], b[r][c];

    P("Array a.\n");

    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            P("Enter a[%d][%d] : ", i, j);
            S("%d", &a[i][j]);
        }
    }

    P("Array b.\n");
    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            P("Enter b[%d][%d] : ", i, j);
            S("%d", &b[i][j]);
        }
    }

    P("\nSum of Array .\n");

    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            P("%d ", a[i][j] + b[i][j]);
        }
        P("\n");
    }
    return 0;
}
