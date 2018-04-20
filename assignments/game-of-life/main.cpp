#include <iostream>
#include <thread>
#include "gameboard.h"

bool break_condition = false;
int number_of_rows = 8;
int number_of_columns = 8;
int over_populated = 3;
int under_populated = 2;

void looper() {
    std::cout << "Initial state: " << endl;
    GameBoard gameBoard(number_of_rows, number_of_columns, over_populated, under_populated);
    gameBoard.draw();
    std::cout << "Number of alive cells: " << gameBoard.findAliveCount() << endl;
    std::cout << endl;

    while(true) {
        if(break_condition) {
            break;
        }
        gameBoard.update();
        gameBoard.draw();
        cout << "Number of alive cells: " << gameBoard.findAliveCount() << endl;
        cout << endl;
        chrono::milliseconds timespan(1000);
        this_thread::sleep_for(timespan);
    }
}

bool get_init_values() {
    cout << "Set number of rows: " << endl;
    cin >> number_of_rows;
    cout << endl;
    cout << "Set number of columns: " << endl;
    cin >> number_of_columns;
    cout << "Set under populated variable: " << endl;
    cin >> under_populated;
    cout << endl;
    cout << "Set over populated variable: " << endl;
    cin >> over_populated;
    cout << endl;
    return true;
}

void user_input() {
    if(cin.get() == 'n') {
        break_condition = true;
    }
}

int main() {

    std::cout << "Welcome to Game of Life" << endl;

    if(get_init_values()) {
        // create a thread for the loop and one for the user input
        std::thread loop_thread(looper);
        std::thread user_input_thread(user_input);

        // synchronize
        loop_thread.join();
        user_input_thread.join();
    }

    std::cout << "Game of Life ended successfully!" << endl;
    return 0;
}