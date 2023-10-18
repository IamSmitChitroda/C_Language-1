#include <stdio.h>
#define p printf
#define s scanf
int main()
{

    char name[20];
    printf("Enter your name : ");
    scanf("%s", name);

    for (int i = 0; i < 20; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
            name[i] += 32;
        else if (name[i] >= 97 && name[i] <= 122)
            name[i] -= 32;
    }
    printf("%s", name);

    return 0;
}
