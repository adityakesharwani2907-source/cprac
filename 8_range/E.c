#include <stdio.h>

int  main() {

    int marks;

    printf("Enter your marks(%%): ");
    scanf("%d", &marks);

    marks >= 75 
        ? printf("Distinction") 
        : marks >= 60 
            ? printf("First Division") 
            : marks >= 45 
                ? printf("Second Division") 
                : marks >= 33 
                    ? printf("Third Division") 
                    : printf("Fail"); 

    return 0; 
}