#include <stdio.h>

int main () {

    int i, j, n, a = 65;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 0;i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%c ", a++);
        }
        printf("\n");
    }

    return 0;
}