#include <stdio.h>

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    switch(n) {
        case 0:
        case 1:
        case 2:
            printf("%d is a Weak Number", n);
            break;
        case 3:
        case 4:
        case 5:
        case 6:
            printf("%d is a Strong Number", n);
            break;
        case 7:
        case 8:
        case 9:
            printf("%d is a very Strong Number", n);
            break;
        default:
            printf("%d is an Invalid Number", n);        
    }

    return 0;
}