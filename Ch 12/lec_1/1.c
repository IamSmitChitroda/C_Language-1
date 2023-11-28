#include <stdio.h>

struct studentData
{
    int id;
    char name[20];
    int age;
    char course[10];
    char city[10];
    int std;
    char school[20];
};

int main(int argc, char const *argv[])
{
    struct studentData obj[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\n\nData of Student %d\n", i + 1);
        printf("Enter student ID : ");
        scanf("%d", &obj[i].id);
        printf("Enter student name : ");
        scanf(" %[^\n]", &obj[i].name);
        printf("Enter student age : ");
        scanf("%d", &obj[i].age);
        printf("Enter student course : ");
        scanf(" %[^\n]", &obj[i].course);
        printf("Enter student city : ");
        scanf(" %[^\n]", &obj[i].city);
        printf("Enter student standerd : ");
        scanf(" %[^\n]", &obj[i].std);
        printf("Enter student school : ");
        scanf(" %[^\n]", &obj[i].school);
    }

    printf("\n\n----:Student Data:----\n\n");

    printf("Id\t|\tName\t|\tAge\t|\tCourse\t|\tCity\t|\tSchool\t|\n");
    for (int i = 0; i < 3; i++)
        printf("%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\n", obj[i].id, obj[i].name, obj[i].age, obj[i].course, obj[i].city, obj[i].std, obj[i].school);

    return 0;
}
