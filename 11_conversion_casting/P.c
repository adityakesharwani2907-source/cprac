#include <stdio.h>

int main () {

    long long a = 34;
    
    int x = sizeof(a + 3.4f);

    printf("%d", x);

    return 0;
}