#include <stdio.h>

int main() {

    char section = 'E';
    int age = 12;
    float marks = 89.33f;
    char name[] = "Jageesh Sinha";

    // printf("My Name: %s and My Age: %d and My Marks: %f and My Section: %c", "jay", 9, 78.34f, 'B');
    
    printf("My Name: %s and My Age: %d and My Marks: %f and My Section: %c", name, age, marks, section);

    return 0;
}