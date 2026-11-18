#include <stdio.h>

int main () {

    int n;

    printf("Press : \n1 for Hindi \n2 for Tamil \n3 for English: ");
    scanf("%d", &n);

    switch(n) {
        case 1: 
            printf("Hindi");
            break;
        case 2:
            printf("Tamil");
            break;
        case 3:
            printf("English");
            break;
        default:
            printf("Incorrect Input...");
                
    }

    printf("\nNormal code after switch....");

    return 0;
}