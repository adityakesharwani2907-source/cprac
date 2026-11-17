#include <stdio.h>

int main () {

    int a = sizeof(signed short int );
    int b = sizeof(unsigned short int );
    int c = sizeof(short int );
    int d = sizeof(short);

     printf("~%d~ ~%d~ ~%d~ ~%d~", a, b, c, d);


    return 0;

}