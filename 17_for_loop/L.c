#include <stdio.h>

int main() {

    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 65; i < 65+n; i++) {
        printf("%c\n", i);
    }

    return 0;
}