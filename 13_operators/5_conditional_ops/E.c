#include <stdio.h>

int main () {

    int price;
    
    printf("Enter  your Book price: ");
    scanf("%d", &price);

   price <= 200 ? printf("Buy Now") : price <= 400 ? printf("Buy Later") : printf("Don't Buy");

    return 0;
}