//
// Created by hans on 28/01/2018.
//
#include "game.h"

bool play(const string& playerAction, const string& computerAction) {

    if(playerAction == "rock") {

        if(computerAction == "rock")
            cout << "Rock against Rock = draw!" << endl;

        else if(computerAction == "paper")
            cout << "Rock vs Paper = computer wins!" << endl;

        else if(computerAction == "scissors")
            cout << "Rock vs Scissors = you win!" << endl;

    }

    else if(playerAction == "paper") {

        if(computerAction == "rock")
            cout << "Paper vs rock = you win!" << endl;

        else if(computerAction == "paper")
            cout << "Paper vs Paper = draw!" << endl;

        else if(computerAction == "scissors")
            cout << "Paper vs Scissors = ouch, you loose!" << endl;

    }

    else if(playerAction == "scissors") {

        if(computerAction == "rock")
            cout << "Scissors vs Rock = you loose!" << endl;

        else if(computerAction == "paper")
            cout << "Scissors vs Paper = You win! " << endl;

        else if(computerAction == "scissors")
            cout << "Scissors vs Scissors = bloody draw!" << endl;

    }
    else {
        cout << "Ending game..." << endl;
        return false;
    }

    return true;
}
