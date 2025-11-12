#include <stdio.h>
#include <stdlib.h>

struct Groceries
{
    int itemCode;
    char brandName[50];
    char itemName[50];
    int quantity;
    float price;
};

void MESSAGE(struct Groceries it)
{
    if (it.price > 1000)
    {
        printf("%s costs more than 1000\n", it.itemName);
    }
}

void VOUCHER(float totalb)
{
    if (totalb > 10000)
    {
        printf("Voucher of Rs. 200\n");
    }
    else
    {
        printf("No voucher\n");
    }
}

int main()
{
    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    float totalb = 0;
    struct Groceries items[n];

    printf("Enter Code : Brand : Item : Quantity : Price\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %s %d %f",
              &items[i].itemCode,
              items[i].brandName,
              items[i].itemName,
              &items[i].quantity,
              &items[i].price);

        MESSAGE(items[i]);
        totalb += items[i].quantity * items[i].price;
    }

    printf("%.2f\n", totalb);

    VOUCHER(totalb);
    return 0;
}
