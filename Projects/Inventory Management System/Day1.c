#include <stdio.h>

int main()
{
    int quantity;
    float price;

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Total = %.2f\n", quantity * price);

    return 0;
}