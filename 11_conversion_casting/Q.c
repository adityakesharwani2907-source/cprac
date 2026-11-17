#include <stdio.h>

int main () {

    int x = sizeof('A' + 0);

    printf("%d", x);

    return 0;
}