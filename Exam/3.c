#include <stdio.h>

struct Product
{
    int productNo;
    char productName[50];
    float price;
    int quantity;
};

float calculateTotal(struct Product p)
{
    float total = p.price * p.quantity;
    return total + (total * 0.18);
}

int main()
{
    FILE *filePointer;
    filePointer = fopen("bill.txt", "w");

    int N, i;
    char customerName[50], contactNo[15];
    printf("Enter the number of products: ");
    scanf("%d", &N);

    struct Product products[N];

    printf("Enter customer name: ");
    scanf("%s", customerName);

    printf("Enter contact number: ");
    scanf("%s", contactNo);

    fprintf(filePointer, "Customer Name: %s\nContact Number: %s\n\n", customerName, contactNo);
    fprintf(filePointer, "Product No\tProduct Name\tPrice\tQuantity\tTotal\n");
    printf("Product No\tProduct Name\tPrice\tQuantity\tTotal\n");

    for (i = 0; i < N; i++)
    {
        printf("Enter details for Product %d:\n", i + 1);
        printf("Product Number: ");
        scanf("%d", &products[i].productNo);
        printf("Product Name: ");
        scanf("%s", products[i].productName);
        printf("Price: ");
        scanf("%f", &products[i].price);
        printf("Quantity: ");
        scanf("%d", &products[i].quantity);

        float total = calculateTotal(products[i]);

        fprintf(filePointer, "%d\t\t%s\t\t%.2f\t%d\t\t%.2f\n", products[i].productNo, products[i].productName, products[i].price, products[i].quantity, total);
    }

    fclose(filePointer);
    printf("Bill generated and stored in 'bill.txt' file.\n");
    return 0;
}
