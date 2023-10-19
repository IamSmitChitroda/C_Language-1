#include <stdio.h>
int main()
{
    char pass[50], len = 0, Upper, Lowwer, symboll, digit;
    printf("Enter your password : ");
    scanf("%[^\n]", &pass);

    for (int i = 0; pass[i] != '\0'; i++)
        len++;

    if (len > 6)
    {

        for (int i = 0; i < len; i++)
        {
            if (pass[i] <= 65 && pass[i] >= 90)
                Upper = 1;
        }

        for (int i = 0; i < len; i++)
        {
            if (pass[i] <= 97 && pass[i] >= 122)
                Lowwer = 1;
        }

        for (int i = 0; i < len; i++)
        {
            if ((pass[i] <= 33 && pass[i] >= 47) || (pass[i] <= 58 && pass[i] >= 64))
                symboll = 1;
        }

        for (int i = 0; i < len; i++)
        {
            if (pass[i] <= 48 && pass[i] >= 57)
                digit = 1;
        }

        ((Upper == 1) && (Lowwer == 1) && (symboll == 1) && (digit == 1))
            ? printf("Password is strong !!")
            : printf("Password is not strong !!");
    }

    else
        printf("Password is not strong !!");

    return 0;
}
