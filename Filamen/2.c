#include <stdio.h>
int main()
{
    char string[50];
    printf("Enter any string : ");
    scanf("%[^\n]", &string);

    int len = 0, count;

    for (int i = 0; string[i] != '\0'; i++)
        len++;

    for (int i = 0; i < len; i++)
    {
        count = 1;
        if (string[i] != '\0')
        {
            for (int j = i + 1; j < len; j++)
            {

                if (string[i] == string[j])
                {
                    count++;
                    string[j] = '\0';
                }
            }
            printf("%c ===> %d\n", string[i], count);
        }
    }

    return 0;
}
