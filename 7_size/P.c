#include <stdio.h>

int main() {  
 
    int a = sizeof(signed long long int);
    int b = sizeof(unsigned long long int);
    int c = sizeof(long long int);
    int d = sizeof(long long);

    printf("~%d~ ~%d~ ~%d~ ~%d~", a, b, c, d);

    return 0;
}