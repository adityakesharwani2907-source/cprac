#include <stdio.h>

int main() {

    switch(12) {
        case 2.3:
            printf("A");
    }

    return 0;
}

// error: case label does not reduce to an integer constant