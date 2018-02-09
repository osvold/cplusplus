#include <iostream>
#include <vector>
#include "computer.h"
#include "player.h"
#include "game.h"

using namespace std;

int main() {

    cout << "Let`s play rock, paper, scissors!" << endl;
    cout << "Write rock, paper, or scissors followed by enter to play." << endl;

    vector<string> computer = getComputer();

    string playerAction;
    string computerAction;

    bool playGame = true;
    while(playGame) {
        cout << "Choose your hand! (rock, paper, or scissors followed by enter):" << endl;
        playerAction = nextPlayerAction();
        computerAction = nextComputerAction(computer);
        playGame = play(playerAction, computerAction);
    }

    return 0;
}