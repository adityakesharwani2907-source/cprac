#include <stdio.h>

int main() {

    int i, j, n, t;

    printf("Enter a number: ");
    scanf("%d", &n);

    t = 'A' + n * n;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%c ", --t);
        }
        printf("\n");
    }

    return 0;
}