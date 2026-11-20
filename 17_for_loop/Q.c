#include <stdio.h>

int main() {

    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = n-1; i >= 0; i--) {
        printf("%c\n", 65 + i);
    }   

    return 0;
}