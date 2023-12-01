#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("demo.txt", "w");

    fopen("ptr", "Number : ");
    printf("Number : ");
    for (int i = 1; i < 50; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            fprintf(ptr, "%d ", i);
            printf("%d ", i);
        }
    }

    return 0;
}