#include <stdio.h>

int main () {

    int i, n, j;

    printf("Enter a number: ");
    scanf("%d",&n);

    i = 0;
    while (i < n) {
        j = 0;
        while(j <= i) {
            printf("@ ");
            j++;
            }
            printf("\n");
            i++;
        }

    return 0;
}