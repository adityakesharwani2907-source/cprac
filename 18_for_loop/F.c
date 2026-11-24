#include <stdio.h>

int main() {

    int i, j, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = n; i > 0; i--) {
        for(j = 0; j < n; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}