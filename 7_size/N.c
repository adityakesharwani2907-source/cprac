#include <stdio.h>

int main() {  
 
    int a = sizeof(signed int);
    int b = sizeof(unsigned int);
    int c = sizeof(int);

    printf("~%d~ ~%d~ ~%d~", a, b, c);

    return 0;
}