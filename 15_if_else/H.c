#include <stdio.h>

int main() {

    float marks;

    printf("Enter your marks(%%): ");

    scanf("%f", &marks);

    if(marks >= 75) {
        printf("Distinction...");
    } else if(marks >= 60) {
        printf("First Division...");
    } else if(marks >= 45) {
        printf("Second Division...");
    } else if(marks >= 33) {
        printf("Third Division...");
    } else {
        printf("fail...");
    }

    return 0;
}