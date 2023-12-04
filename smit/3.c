#include <stdio.h>
#define p printf
#define s scanf

struct pro
{
    char pname[20];
    int pq, pno, pp;
};

main()
{

    FILE *fp;

    fp = fopen("bill.txt", "w");

    char name[20], No[10];
    int product, total = 0, i;

    p("Enter your name : ");
    s("%[^\n]", &name);
    p("Enter your contect no. : ");
    s("%s", &No);
    fprintf(fp, "%s", name);
    fprintf(fp, "%s", No);

    p("\n\nEnter your product : ");
    s("%d", &product);
    struct pro ob[product];

    for (i = 0; i < product; i++)
    {
        p("Enter product name : ");
        s("%s", &ob[i].pname);
        p("Enter product no : ");
        s("%s", &ob[i].pno);
        p("Enter product Quenty : ");
        s("%d", &ob[i].pq);
        p("Enter product price : ");
        s("%s", &ob[i].pp);
    }

    for (i = 0; i < product; i++)
        total = total + (ob[i].pp + ob[i].pq);

    printf("Bill : %d", (total) + (total * 0.18));
}
