#include <stdio.h> 

int main () {

    int marks;

    printf("Enter your marks (%%) : " );
    scanf("%d", &marks);

    marks >= 75 ? printf("DISTINCTION") 
        : marks >= 60 ? printf("1st DIVISION")
             : marks >= 45 ? printf("2nd DIVISION") 
                : marks >= 33 ? printf("3rd DIVISION") 
                    : printf("FAIL");  

    return 0;
}