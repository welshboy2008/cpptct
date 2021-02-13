#include "game.hpp"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

std::unique_ptr<game> tct(new game);

TEST_CASE("first move state", "[game]") {
    tct->makeMove(0,0,'X');    
    std::vector<std::vector<char>> boardUnderTest = {{'X','.','.'},{'.','.','.'},{'.','.','.'}};
    bool test = false;
    
    REQUIRE(tct->getBoard() == boardUnderTest);
    tct->printBoard();
}

TEST_CASE("Test Horizontal Win Scenario", "[game") {
    std::cout << "\n\n";
    tct->initialiseBoard();
    tct->makeMove(0,0,'X');
    tct->makeMove(0,1,'X');
    tct->makeMove(0,2,'X');
    tct->printBoard();
    REQUIRE(tct->winStateCheck() == true);
}

TEST_CASE("Test Vertical Win Scenario", "[game") {
    std::cout << "\n\n";
    tct->initialiseBoard();
    tct->makeMove(0,0,'X');
    tct->makeMove(1,0,'X');
    tct->makeMove(2,0,'X');
    tct->printBoard();
    REQUIRE(tct->winStateCheck() == true);
}

TEST_CASE("Test Diagonal Win Scenario", "[game") {
    std::cout << "\n\n";
    tct->initialiseBoard();
    tct->makeMove(0,0,'X');
    tct->makeMove(1,1,'X');
    tct->makeMove(2,2,'X');
    tct->printBoard();
    REQUIRE(tct->winStateCheck() == true);
}