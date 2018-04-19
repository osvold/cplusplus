#include <iostream>
#include <thread>
#include "gameboard.h"

bool break_condition = false;

void looper() {

    std::cout << "Initial state: " << endl;
    GameBoard gameBoard(8, 8, PrinterInterfaceEnum::ConsolePrinter);
    gameBoard.draw();
    std::cout << "Number of alive cells: " << gameBoard.findAliveCount() << endl;
    std::cout << endl;

    while(true) {
        if(break_condition) {
            break;
        }
        gameBoard.update();
        gameBoard.draw();
        std::cout << "Number of alive cells: " << gameBoard.findAliveCount() << endl;
        std::cout << endl;
        std::chrono::milliseconds timespan(3000);
        std::this_thread::sleep_for(timespan);
    }
}

void user_input() {
    if(std::cin.get() == 'n') {
        break_condition = true;
    }
}

int main() {

    // create a thread for the loop and one for the user input
    std::thread loop_thread(looper);
    std::thread user_input_thread(user_input);

    // synchronize
    loop_thread.join();
    user_input_thread.join();

    std::cout << "Game of Life ended successfully!" << endl;
    return 0;
}