#include <stdio.h>

int main () {

    int Marks;

    printf ("Enter Your Marks (%%): ");
    scanf("%d", &Marks);

    if  (Marks < 0 || Marks > 100){
     printf("Invalid Input");
    }

     else  if (Marks  >= 75){
        printf ("DISTINCITION");
        }

        else if (Marks >= 60 ){
            printf ("FIRST DEVISION");
        }

        else if ( Marks >= 45 ) {
            printf ("SECOND DEVISION");
        }

        else if (Marks >= 33) {
            printf ("THIRD DEVISION");
        }

        else{
              printf("Fail");
        }
    return 0;

}