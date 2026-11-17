#include <stdio.h>

int main () {

    char gender;
    int age; 

    printf("Enter your gender (m/f): ");
    scanf("%c", &gender);

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 60) {
        if(gender == 'f') {
            printf("MB: 0 and RI: 12%%");
        } else {
            printf("MB: 2000 and RI: 11%%");
        } 
    } else if(age > 22) {
        if(gender == 'f') {
            printf("MB: 2000 and RI: 8%%");
        } else {
            printf("MB: 5000 and RI: 6%%");
        }
    } else {
        if(gender == 'f') {
            printf("MB: 0 and RI: 4%%");
        } else {
            printf("MB: 500 and RI: 2%%");
        }
    } 
    
    return 0;
}