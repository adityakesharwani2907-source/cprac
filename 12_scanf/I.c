#include <stdio.h>
#include <stdlib.h>

int main() {

    char name[30];
    char college[60];
    int age;
    float marks;

    printf("Enter your name, college, age and marks: ");
    // scanf("%[A-Za-z ]%d%f", &name, &college, &age, &marks);  // problem
    scanf("%[A-Za-z ]%d%f", &name, &age, &marks);

    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    printf("My Name: %s\nMy College: %s\nMy Age: %d\nMy Marks: %.2f%", name, college, age, marks);

    return 0;

}