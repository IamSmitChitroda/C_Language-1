#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of an Arror : ");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n----: Square Of Each Element :----\n");
    for (int i = 0; i < size; i++)
        printf("%d ", a[i] * a[i]);

    return 0;
}
