#include <stdio.h>

int main() {

    char name[30];
    char college[60];
    int age;
    float marks;

    printf("Enter your name: ");
    scanf("%[A-Za-z ]", &name);

    printf("Enter your college: ");  // problem
    scanf("%[A-Za-z ]", &college);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    printf("My Name: %s\nMy College: %s\nMy Age: %d\nMy Marks: %f", name, college, age, marks);

    return 0;
}  