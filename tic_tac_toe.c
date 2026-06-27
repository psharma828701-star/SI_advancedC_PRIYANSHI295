#include <stdio.h>

char board[9] = {'1','2','3','4','5','6','7','8','9'};

void displayBoard();
int checkWinner();
int checkDraw();

int main() {
    int position;
    char player = 'X';

    while (checkWinner() == 0 && checkDraw() == 0) {
        displayBoard();

        printf("\nPlayer %c enter position: ", player);
        scanf("%d", &position);

        if (position < 1 || position > 9) {
            printf("Invalid position! Try again.\n");
            continue;
        }

        if (board[position - 1] == 'X' || board[position - 1] == 'O') {
            printf("Position already filled! Try again.\n");
            continue;
        }

        board[position - 1] = player;

        if (player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    displayBoard();

    if (checkWinner() == 1) {
        if (player == 'X')
            printf("\nPlayer O wins!\n");
        else
            printf("\nPlayer X wins!\n");
    } else {
        printf("\nGame Draw!\n");
    }

    return 0;
}

void displayBoard() {
    printf("\n");
    printf(" %c | %c | %c \n", board[0], board[1], board[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[3], board[4], board[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[6], board[7], board[8]);
}

int checkWinner() {
    if (board[0] == board[1] && board[1] == board[2])
        return 1;
    if (board[3] == board[4] && board[4] == board[5])
        return 1;
    if (board[6] == board[7] && board[7] == board[8])
        return 1;

    if (board[0] == board[3] && board[3] == board[6])
        return 1;
    if (board[1] == board[4] && board[4] == board[7])
        return 1;
    if (board[2] == board[5] && board[5] == board[8])
        return 1;

    if (board[0] == board[4] && board[4] == board[8])
        return 1;
    if (board[2] == board[4] && board[4] == board[6])
        return 1;

    return 0;
}

int checkDraw() {
    int i;

    for (i = 0; i < 9; i++) {
        if (board[i] != 'X' && board[i] != 'O')
            return 0;
    }

    return 1;
}