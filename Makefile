tictactoe: ./src/game.cpp ./test/testGame.cpp
	@mkdir -p bin
	@g++ -std=c++14 -o ./bin/tests ./src/game.cpp ./test/testGame.cpp -Isrc/
	echo "Running tests..."
	@./bin/tests