#include <stdio.h>

struct marksheet
{
    int Rnum;
    char name[20];
    int che;
    int math;
    int phy;
};

int main()
{
    struct marksheet data[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d :\n", i + 1);
        printf("Roll no => ");
        scanf("%d", &data[i].phy);

        fflush(stdin);

        printf("Name => ");
        scanf("%[^\n]", &data[i].name);
        printf("Chemistry => ");
        scanf("%d", &data[i].che);
        printf("Mathematics => ");
        scanf("%d", &data[i].math);
        printf("Physics => ");
        scanf("%d", &data[i].phy);
    }

    printf("\n\n----:Result:----\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%c (%d)\n", data[i].name, data[i].Rnum);
        printf("Chemistry => %d\n", data[i].che);
        printf("Mathematics => %d\n", data[i].math);
        printf("Physics => %d", data[i].phy);
        printf("Total => %d/300\n", data[i].che + data[i].math + data[i].phy);
        printf("Percent => %d\n", (data[i].che + data[i].math + data[i].phy) / 3);
    }

    return 0;
}
