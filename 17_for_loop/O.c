#include <stdio.h>

int main() {

    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 65+n-1; i >= 65; i--) {
        printf("%c\n", i);
    }   

    return 0;
}