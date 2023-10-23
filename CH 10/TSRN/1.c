#include <stdio.h>

void cube(int n)
{
    printf("(%d)^3 = %d", n, n * n * n);
}

int main()
{
    int n;
    printf("Enter value : ");
    scanf("%d", &n);

    cube(n);
    return 0;
}
