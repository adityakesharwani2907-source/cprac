#include <stdio.h>
#include <stdlib.h>

int main() {

    char a, b;

    printf("Enter first character: ");
    scanf("%c", &a);

    fflush(stdin);

    printf("Enter another character: ");
    scanf("%c", &b);

    printf("\n*********\n\n");

    printf("%d -- %d", a, b);

    return 0;
}