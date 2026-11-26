#include <stdio.h>

int main() {

    int i;

    for(i = 65; i < 75; i++) {
        if(i % 2 != 0) {
            continue;
        }

        printf("%c ", i);
    }

    return 0;
}