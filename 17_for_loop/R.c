#include <stdio.h>

int main () {

    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i <= n; i++) {
        printf("%c\n", 65 + n - i);
    }   

    return 0;
}