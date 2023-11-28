#include <stdio.h>

void ptr(int size)
{

    int arr[size][size];
    int *ptr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            ptr[i][j] = &arr[i][j];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter Arr[%d][%d] : ", i, j);
            scanf("%d", &*ptr[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            printf("%d ", (*ptr[i][j]) * (*ptr[i][j]) * (*ptr[i][j]));
        printf("\n");
    }
}

int main()
{
    int size;
    printf("Enter size of an Array : ");
    scanf("%d", &size);

    ptr(size);

    return 0;
}
