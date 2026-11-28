#include <stdio.h>

int main() {

    int n, odd_count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n >= 0) {      

        if(n % 2 != 0) {
            odd_count++;
            printf("\nEnter a number: ");
            scanf("%d", &n);
            continue;
        } 
        
        printf("\nEven Number: %d", n);
        printf("\nEnter a number: ");
        scanf("%d", &n);
    }

    printf("\n%d odd numbers found", odd_count);

    return 0;
}