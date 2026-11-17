#include <stdio.h>

int main() {

    char gender;
    int age;

    printf("Enter your gender(m/f): ");
    scanf("%c", &gender);

    printf("Enter your age: ");
    scanf("%d", &age);

    if((gender == 'm' || gender == 'f') && (age >= 1 && age <= 100)) {
        if(gender == 'f') {
            if(age <= 22) {
                printf("MB: 0 and RI: 4%%");
            } else if(age < 60) {
                printf("MB: 2000 and RI: 8%%");
            } else {
                printf("MB: 0 and RI: 12%%");
            }
        } else {
            if(age <= 22) {
                printf("MB: 500 and RI: 2%%");
            } else if(age < 60) {
                printf("MB: 5000 and RI: 6%%");
            } else {
                printf("MB: 2000 and RI: 11%%");
            }
        }    
    } else {
        if(gender != 'm' && gender != 'f') {
            printf("Invalid Gender: %c", gender);
        }

        if(age < 1 || age > 100) {
            printf("Invalid Age: %d", age);    
        }
    }
    

    return 0;
}
