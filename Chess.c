#include <stdio.h>
#include <stdlib.h>


#define BLACK_COLOR "\x1b[30m"

enum Type {
    None = 0,
    Pawn,
    Rook,
    Knight,
    Bishop,
    Queen,
    King
};

enum Color {
    Black = 1,
    WHITE
};

struct Piece {
    enum Type type;
    enum Color color;
};

int board[8][8] = {
    {Rook,Knight,Bishop,Queen,King,Bishop,Knight,Rook},
    {Pawn,Pawn,Pawn,Pawn,Pawn,Pawn,Pawn,Pawn},
    {None,None,None,None,None,None,None,None},
    {None,None,None,None,None,None,None,None},
    {None,None,None,None,None,None,None,None},
    {None,None,None,None,None,None,None,None},
    {Pawn,Pawn,Pawn,Pawn,Pawn,Pawn,Pawn,Pawn},
    {Rook,Knight,Bishop,Queen,King,Bishop,Knight,Rook}
};

void printBoard();




void printBoard(){

    for(int i = 0;i<8;i++){
        for(int j = 0;j<8;j++){
            printf("%c  ",board[i][j]);
        }
        printf("\n");
    }

}


int main(){

printBoard();


printf("1 to quit.\n");
printf("-----------------------\n");
int input;
scanf("%d", &input);

switch (input){

    case 1:
        return 0;

}

}