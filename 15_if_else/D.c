#include <stdio.h>

int main () {
    
    int x;

    printf("Boil Water\n");

    printf("press \n1: Sugar \n2: Sugar-free \n3: Jaggeryy \n4: Honeyy..");
    scanf("%d", &x);

    if (x == 1) {
        printf("Add Sugar\n");
    } else if ( x == 2) {
        printf("Add Sugar-free\n");
    } else if ( x == 3) {
        printf("Add Jaggeryy\n");
    } else if ( x == 4) {
        printf("Add Honeyy..\n");
    }

    printf("Add tea leaves....\n");
    printf("Add Milk...\n");

    printf("A cup if tea is readyyyyyy.....");

    return 0;
}