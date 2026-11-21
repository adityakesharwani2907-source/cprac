#include <stdio.h>
#include <stdlib.h>

int main () {

    int i;
    char start, end ; //start<end

    printf("Enter a start charcter: ");
    scanf("%c",&start );

    fflush(stdin);

    printf("Enter a end charcter:");
    scanf("%c",&end);

    for (i=start; i <= end; i++) {
        printf("%c\n", i);
    }
    
    return 0;
}