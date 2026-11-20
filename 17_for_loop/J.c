#include <stdio.h>

int main() {

    int i, start, end; // start < end

    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter end number: ");
    scanf("%d", &end);

    for(i = start; i <= end; i+=2) {
        printf("%d\n", i);
    }

    return 0;
}