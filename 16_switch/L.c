#include <stdio.h>

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0 || n > 9) {
        printf("%d is an Invalid Number", n);
    } else if(n < 3) {
        printf("%d is a Weak Number", n);
    } else if(n < 7) {
        printf("%d is a Strong Number", n);
    } else {
        printf("%d is a Very Strong Number", n);
    } 

    return 0;
}