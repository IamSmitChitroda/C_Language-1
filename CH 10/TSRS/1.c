#include <stdio.h>

int IntInput()
{
    int n;
    scanf("%d", &n);
    return n;
}

void arrayIntput(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter element a[%d] : ", i);
        scanf("%d", &array[i]);
    }
}

void arrayOutput(int array[], int size)
{
    for (int i = 0; i < size; i++)
        printf("Array[%d] : %d\n", i, array[i]);
}

int sum(int array[], int size)
{
    printf("\n----:Array Intput:-----\n\n");
    arrayIntput(array, size);

    printf("\n\n----:Array Output:-----\n\n");
    arrayOutput(array, size);

    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];

    return sum;
}

int main()
{
    int size;

    printf("Enter size of an Array : ");
    size = IntInput();

    int array[size];

    int Sum = sum(array, size);

    printf("\n\nSum of Array : %d", Sum);

    return 0;
}
