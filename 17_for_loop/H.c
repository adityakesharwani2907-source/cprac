#include <stdio.h>

int main () {

    int i, start, end; // start << end

    printf("Enter a start number :");
    scanf("%d", &start);

    printf("Enter a end number :");
    scanf("%d", &end);

    for (i = start; i >= end; i--) {
            printf("%d\n", i);
    }

    return 0;
}