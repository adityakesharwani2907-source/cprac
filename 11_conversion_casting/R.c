#include <stdio.h>

int main () {

    short a = 2;

    int x = sizeof('A' + a);

    printf("%d", x);

    return 0;
}