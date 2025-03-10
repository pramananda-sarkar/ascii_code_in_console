#include "utils.h"



void print_16x16_matrix(const int matrix[16][16]) {
    printf("%s", RED);
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            if (matrix[i][j] == 1) {
                printf("# ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("%s", COLOR_RESET);
}
