#include <stdio.h>

int main () {

    int i,n;

    printf("Enter a number:  ");
    scanf("%d",&n);

    char x = 'A';
    int y = 1;

    for (i =0; i < n; i++) {
        if(i % 2 == 0) {    
            printf("%c ", x++);
        } else {
            printf("%d ", y++);
        }
    }

    return 0;
}