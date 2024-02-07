#include <stdio.h>

int main() {
    int c1[10] = {10, 5, 68, 8, 47, 12, 54, 13, 62, 11};
    int c2[15] = {11, 5, 62, 112, 84, 76, 12, 55, 59, 85, 13, 0, 14, 19, 18};

    printf("Números iguais nos dois arrays:\n");

    int a, b;

    for (a = 0; a < 10; a++) {
        for (b = 0; b < 15; b++) {
            if (c1[a] == c2[b]) {
                printf("%d\n", c1[a]);
            }
        }
    }


    return 0;
}
