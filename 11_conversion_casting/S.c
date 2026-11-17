#include <stdio.h>

int main() {
 
    short a = 2, b = 3;

    int x = sizeof(b + a);

    printf("%d", x);
 
    return 0;
}  