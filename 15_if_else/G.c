#include <stdio.h>

int main() {

    int price;

    printf("Enter book price: ");
    scanf("%d", &price);

    if(price <= 200) {
        printf("Buy Now...");
    } else if(price <= 400) {
        printf("Buy Later...");
    } else {

        
        printf("Don't Buy...");
    }

    return 0;
}