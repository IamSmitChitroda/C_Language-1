#include <stdio.h>

int stringLength(char str[])
{
    int length = 0;

    for (int i = 0; str[length] != '\0'; i++)
    {
        length++;
    }

    return length;
}

int main()
{
    char string[20];

    printf("Enter any string: ");
    scanf("%[^\n]", string);

    printf("Length is: %d\n", stringLength(string));

    return 0;
}
