#include <stdio.h> 

int main () {

    int marks;

    printf("Enter your marks (%%) : " );
    scanf("%d", &marks);

   marks < 33 
        ? printf("Fail") 
        : marks < 45 
            ? printf("Third Division") 
            : marks < 60 
                ? printf("Second Division") 
                : marks < 75 
                    ? printf("First Division")
                    : printf("Distinction"); 
  

    return 0;
}