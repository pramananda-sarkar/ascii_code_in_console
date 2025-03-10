#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header/symbol.h"
#include "header/helper.h"
#include "header/color.h"


char SPECIAL_CHAR = '*'; 
char COMMON_CHAR = '#';


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

typedef struct {
    int matrix[16][16];
} Symbol;

Symbol getSymbol(char c){
    Symbol symbol;
    switch(c){
        case 'A':
            memcpy(symbol.matrix, A, sizeof(A));
            break;
        case 'B':
            memcpy(symbol.matrix, B, sizeof(B));
            break;
        case 'C':
            memcpy(symbol.matrix, C, sizeof(C));
            break;
        case 'D':
            memcpy(symbol.matrix, D, sizeof(D));
            break;
        case 'E':
            memcpy(symbol.matrix, E, sizeof(E));
            break;
        case 'F':
            memcpy(symbol.matrix, F, sizeof(F));
            break;
        case 'G':
            memcpy(symbol.matrix, G, sizeof(G));
            break;
        case 'H':
            memcpy(symbol.matrix, H, sizeof(H));
            break;
        case 'I':
            memcpy(symbol.matrix, I, sizeof(I));
            break;
        case 'J':
            memcpy(symbol.matrix, J, sizeof(J));
            break;
        case 'K':
            memcpy(symbol.matrix, K, sizeof(K));
            break;
        case 'L':
            memcpy(symbol.matrix, L, sizeof(L));
            break;
        case 'M':
            memcpy(symbol.matrix, M, sizeof(M));
            break;
        case 'N':
            memcpy(symbol.matrix, N, sizeof(N));
            break;
        case 'O':
            memcpy(symbol.matrix, O, sizeof(O));
            break;
        case 'P':
            memcpy(symbol.matrix, P, sizeof(P));
            break;
        case 'Q':
            memcpy(symbol.matrix, Q, sizeof(Q));
            break;
        case 'R':
            memcpy(symbol.matrix, R, sizeof(R));
            break;
        case 'S':
            memcpy(symbol.matrix, S, sizeof(S));
            break;
        case 'T':
            memcpy(symbol.matrix, T, sizeof(T));
            break;
        case 'U':
            memcpy(symbol.matrix, U, sizeof(U));
            break;
        case 'V':
            memcpy(symbol.matrix, V, sizeof(V));
            break;
        case 'W':
            memcpy(symbol.matrix, W, sizeof(W));
            break;
        case 'X':
            memcpy(symbol.matrix, X, sizeof(X));
            break;
        case 'Y':
            memcpy(symbol.matrix, Y, sizeof(Y));
            break;
        case 'Z':
            memcpy(symbol.matrix, Z, sizeof(Z));
            break;
        default:
            memcpy(symbol.matrix, DefaultSymbol, sizeof(DefaultSymbol));
            break;
    }
    return symbol;
}

Symbol* getSymbol_array(char* word, int word_length){ 
    Symbol* symbol_array = (Symbol*)malloc(word_length * sizeof(Symbol));
    for(int i = 0; i < word_length; i++){
        symbol_array[i] = getSymbol(word[i]);
    }
    return symbol_array;
}

void print_symbol_array(Symbol* symbol_array, int word_length){
    for(int i = 0; i < word_length; i++){
        print_16x16_matrix(symbol_array[i].matrix);
    }
}


int main(int argc, char *argv[]) {
    printf("Enter your word: ");
    char word[100];
    scanf("%s", word);
    int word_length = strlen(word); 
    print_16x16_matrix(A);
    printf("%s\n", word);
    Symbol* symbol_array = getSymbol_array(word, word_length);
    print_symbol_array(symbol_array, word_length);
    
}