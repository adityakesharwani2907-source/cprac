#include <stdio.h>

int main() {

    int n;

    printf("Press 1 for Meetha, 2 for Namkeen: ");
        scanf("%d", &n);

    switch(n) {
        case 1:
            printf("Enter 1 for Jalebi, 2 for Rasgulla, 3 for GulabJamun: ");
            scanf("%d", &n);
            switch(n) {
                case 1:
                    printf("Jalebi");
                    break;
                case 2:
                    printf("Rasgulla");
                    break;
                case 3:
                    printf("GulabJamun");
                    break;
                default:
                    printf("Invalid Input....!!");
            }
            break;
        case 2:
            printf("Press 1 for Haldiram, 2 for Akash, 3 for Bikaneri: ");
            scanf("%d", &n);
            switch(n) {
                case 1:
                    printf("Haldiram ke namkeen");
                    break;
                case 2:
                    printf("Akash ke namkeen");
                    break;
                case 3:
                    printf("Bikaner ke namkeen");
                    break;
                default:
                    printf("Invalid Input...!!!");
            }
            break;
        default:
            printf("Invalid Input...!!");
    }

    return 0;
}
