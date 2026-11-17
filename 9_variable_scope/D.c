#include <stdio.h>


int main() {
    
    int y = 45;
    
    {
        int y = 12;

        printf("%d\n", y);
    }

    printf("%d", y);
    
    return 0; 
}