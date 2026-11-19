#include <stdio.h>

int main () {

    int n;

    printf("Enter a number: ");
    scanf("%d",&n);


    switch (n) {
        default:
        case 1:
            printf("hello\n");
            // break
        case 2:
            printf("hii\n");
            // break
        case 3:
            printf("Namstee\n");
            // break
        case 4:
            printf("Kemchooo\n");
            // break
    }

    return 0;
}