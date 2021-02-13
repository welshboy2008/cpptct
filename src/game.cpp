#include "game.hpp"
#include <iostream>

game::game() {    
    initialiseBoard();
}

game::~game() {}

void game::initialiseBoard() {    
    board = {{'.','.','.'},{'.','.','.'},{'.','.','.'}};
}

void game::printBoard() {
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            std::cout << board[row][col];
        }
        std::cout << "\n";
    }
}

void game::makeMove(int cordX, int cordY, char turn) {
    board[cordX][cordY] = turn;
}

std::vector<std::vector<char>> game::getBoard() {
    return board;
}

bool game::winStateCheck() {
    for(int row = 0; row < 3; row++) {
        if(board[row][0] == board[row][1] && board[row][1] == board[row][2] && board[row][0] != '.') {
            return true;
        }        
    }

    // Column check
    for(int col = 0; col < board[0].size(); col++){
        if(board[0][col] == board[1][col] && board[1][col] == board[2][col] && board[0][col] != '.') {
            return true;
        }
    }

    // check diagonals top left to bottom right...
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '.') {
        return true;
    }

    // diagonal check

    return board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != '.';
}