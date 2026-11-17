#include <stdio.h>

int main () {

    int price;

    printf("Enter your book price:  ");
    scanf("%d", &price);

    printf("%s", price <= 200 ? "Buy Now" : price <= 400 ? "Buy Later" : "Don't Buy");


    return 0;

}