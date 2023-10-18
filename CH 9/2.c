#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char name[20];
    p("Enter any Name : ");
    s("%s", &name);
    for (int i = 0; i < 20; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
            name[i] += 32;
    }
    p("%s", name);
    return 0;
}
