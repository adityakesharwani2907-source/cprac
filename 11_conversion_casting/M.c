#include <stdio.h>

int main() {

    int x = sizeof(34 + 5.6 + 'A');

    printf("%d", x);
 
    return 0;
}