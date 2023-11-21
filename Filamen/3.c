#include <stdio.h>
int main()
{

    char string1[20], string2[20];
    int comp = 0;

    printf("Enter string 1:");
    scanf("%s", &string1);
    printf("Enter string 2:");
    scanf("%s", &string2);

    for (int i = 0; string1[i] != '\0' && string1[i] != '\0'; i++)
    {
        if (string1[i] == string2[i])
            comp = 1;
        else
        {
            comp = 0;
            break;
        }
    }

    (comp == 1)
        ? printf("compare successful!!")
        : printf("compare unsuccessful!!");

    return 0;
}
