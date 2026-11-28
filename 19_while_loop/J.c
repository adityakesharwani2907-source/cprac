#include <stdio.h>

int main() {

    int i, j, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    i = 1;

    do {
        j = 0;

        do {
            printf("%d ", i);
            j++;
        } while(j < i);

        printf("\n");
        i++;
    } while(i <= n);


    return 0;
}