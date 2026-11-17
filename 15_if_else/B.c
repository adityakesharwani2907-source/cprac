#include <stdio.h>

int main () {

    char x;

    printf("Boil Water\n");

    printf("Sugar?(y/n): ");
    scanf("%c", &x);

    if (x == 'y') {
        printf("Add sugar\n");
    }

    printf("Add tea leaves...\n");
    printf("Add Milk...\n");

    printf("A cup off tea is readyy.....");

    return 0;
}