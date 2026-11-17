#include <stdio.h>

int main() {  
 
    int a = sizeof(float);
    int b = sizeof(double);
    int c = sizeof(long double);

    printf("~%d~ ~%d~ ~%d~", a, b, c);

    return 0;
}