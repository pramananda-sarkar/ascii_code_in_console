
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol.h"

void print_digit(const int digit[16][16]) {
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            if (digit[i][j] == 1) {
                printf("# ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    print_digit(A);
    print_digit(B); 
    print_digit(C);
    print_digit(D);
    print_digit(E);
    print_digit(F);
    print_digit(G);
    print_digit(H);
    print_digit(I);
    print_digit(J);
    print_digit(K);
    print_digit(L);
    print_digit(M);
    print_digit(N);
    print_digit(O);
    print_digit(P);
    print_digit(Q);
    print_digit(R);
    print_digit(S);
    print_digit(T);
    print_digit(U);
    print_digit(V);
    print_digit(W);
    print_digit(X);
    print_digit(Y);
    print_digit(Z);

    print_digit(One);
    print_digit(Two);
    print_digit(Three);
    print_digit(Four);
    print_digit(Five);
    print_digit(Six);
    print_digit(Seven);
    print_digit(Eight);
    print_digit(Nine);
    print_digit(Zero);
    return 0;
}