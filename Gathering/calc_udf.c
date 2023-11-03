#include <stdio.h>

void statement()
{
    printf("Press 1 for +\n");
    printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for %% \n");
    printf("Press 0 for Exit\n");
}

void sum(int a, int b)
{
    printf("Sum : %d\n", a + b);
}

void sub(int a, int b)
{
    printf("Sub : %d\n", a - b);
}

void mult(int a, int b)
{
    printf("Mul : %d\n", a * b);
}

void div(int a, int b)
{
    printf("Div : %d\n", a / b);
}

void mod(int a, int b)
{
    printf("Mod : %d\n", a % b);
}

int main()
{
    int a, b, choice;

    printf("Enter 1st value : ");
    scanf("%d", &a);
    printf("Enter 2nd value : ");
    scanf("%d", &b);

    do
    {
        statement();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            sum(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            mult(a, b);
            break;
        case 4:
            div(a, b);
            break;
        case 5:
            mult(a, b);
            break;
        case 0:
            printf("Exit !!");
            break;
        default:
            printf("Unknown intput !!");
        }

    } while (choice != 0);

    return 0;
}
