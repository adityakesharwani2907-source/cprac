#include <stdio.h>

int main() {

    int n = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n % 2 == 0) {
        printf("\nEven Number: %d", n);
        
        printf("Enter a number: ");
        scanf("%d", &n);
    }

    return 0;
}