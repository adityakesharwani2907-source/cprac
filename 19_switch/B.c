#include <stdio.h>
#include <stdlib.h>

int main () {

    int a, b;
    char op;
    
    printf("Enter two Numbers: ");
    scanf("%d%d", &a, &b);

    fflush(stdin);
    printf("Enter : \n+ for addition\n- for subtraction\n* for multipilication\n/ for division");
    scanf("%c", &op);

    switch(op) {
        case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;

        case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;

        case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;

        case '/':
        printf("%d / %d = %d", a, b, a / b);
        break;
          default:
            printf("Invalid operator...!!");
    }

    printf("\nNormal Code...");
    

    return 0;
}