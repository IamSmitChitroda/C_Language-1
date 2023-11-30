#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of an Array : ");
    scanf("%d", &size);

    int arr[size], *ptr[size], **Cptr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter value of Array : ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
        ptr[i] = &arr[i];

    for (int i = 0; i < size; i++)
        Cptr[i] = &ptr[size - i];

    printf("\n\nReversed Array elements : ");
    for (int i = 0; i < size; i++)
        printf("%d ", **Cptr[i]);

    return 0;
}
