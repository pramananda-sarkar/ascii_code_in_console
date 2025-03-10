#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printBoard(char * board[], int boarder_length){
    int n = boarder_length;
    int i, j ;
    for(i = 0; i < 2 *n ; i++){
        printf("-");
    }
    printf("\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 2 *n ; i++){
        printf("-");
    }
    printf("\n");
    return;
}



int main(int argc, char* argv[]){
    int char_number;
    char c;
    int boarder_length = 20; 
    char* board[boarder_length];
    
    int i, j;
    char special_char = '*'; 
    char common_char = '#';
    for(i = 0; i < boarder_length; i++){
        board[i] = (char*)malloc(boarder_length * sizeof(char));
    }

    
    for (i = 0; i < boarder_length; i++){
        for (j = 0; j < boarder_length; j++){
            board[i][j] = common_char;
        }
    }



    if(argc > 2 && strcmp(argv[1], "-c") == 0 ){
        char_number = atoi(argv[2]);
    }
    else{
        // printf("Enter char number[0-255]: " );
        // scanf("%d", &char_number);
        // if (char_number < 0 && char_number >= 256){
        //     printf("not a valid ascii char!!");
        //     return -1;
        // }
        char_number = 100;
    }

    c = (char)char_number;
    printf("%d\t%c\n", char_number, c);



    
    // make border
    




    printBoard(board, boarder_length);


    return 0;

}