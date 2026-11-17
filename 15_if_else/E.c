#include <stdio.h>

int main() {

    int x;

    printf("Boil Water\n");

    printf("Press \n1: Sugar\n2: Jaggery\n3: Honey: ");
    scanf("%d", &x);

    if(x == 1) {
        printf("Add Sugar\n");     
    } else if(x == 2) {     
        printf("Add Jaggery\n");
    } else if(x == 3) {
        printf("Add Honey...\n");
    } else {
        printf("Add Sugar-free...\n");
    }

    printf("Add Tea Leaves...\n");
    printf("Add Milk...\n");

    printf("A cup of tea is ready to serve...");

    return 0;
}