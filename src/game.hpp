#ifndef __GAME_H_
#define __GAME_H_

#include <vector>

class game {
    public:
        game();
        ~game();
        std::vector<std::vector<char>> getBoard();
        void printBoard();
        void makeMove(int, int, char);
        void initialiseBoard();
        bool winStateCheck();
    private:        
        std::vector<std::vector<char>> board;
};

#endif