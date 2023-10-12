#include <stdio.h>

int main() {
    int array_size,sum = 0;
    
    printf("Enter array size: ");
    scanf("%d", &array_size);

    int array[array_size];

    // Get the array elements from the user
    for (int i = 0; i < array_size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    int average = sum / array_size;

    printf("Average of an Array: %d\n", average);

    return 0;
}
