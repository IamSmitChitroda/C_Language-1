#include <stdio.h>

int check(char str[], char *ptr)
{
    int size = 0;

    for (int i = 0; *(ptr + i) != '\0'; i++)
        size++;

    return size;
}

int main()
{
    char str[20];

    printf("Enter any string = ");
    scanf("%[^\n]", &str);

    printf("The length of a string is : %d", check(str, &str[0]));
    return 0;
}
