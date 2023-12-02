#include <stdio.h>

int main()
{
    FILE *read, *write;
    char data[50];

    read = fopen("1st.txt", "r");
    write = fopen("2nd.txt", "w");

    if (read != NULL)
    {
        while (fgets(data, 2, read) != NULL)
        {
            printf("%s", data);
            fprintf(write, "%s", data);
        }
    }

    return 0;
}
