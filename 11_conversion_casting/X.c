#include <stdio.h>

int add(int a, int b) {
    printf("+++++++\n");
    return a + b;        
}

int main() {
    
    printf("%d", sizeof(add(2, 6)));

    return 0;
} 