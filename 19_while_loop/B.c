#include <stdio.h>

int main () {

    int n = 0;

    while (n % 2 == 0) {
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("\n++++++++++++++++++++\n");
    }

    return 0;
}