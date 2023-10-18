#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char name[4];
    p("Enter any Name : ");
    s("%s", &name);
    for (int i = 0; i < 4; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
            name[i] -= 32;
    }
    p("%s", name);
    return 0;
}
