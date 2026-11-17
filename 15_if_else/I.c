#include <stdio.h>

int main () {

    float marks;

    printf("Enter your marks(%%): ");

    scanf("%f", &marks);

    if(marks < 33) {
        printf("Fail");
    } else if(marks < 45) {
        printf("3rd Division");
    } else if(marks < 60) {
        printf("2nd Division");
    } else if(marks < 75) {
        printf("1st Division");
    } else {
        printf("Distinction");
    }

    return 0; 
}