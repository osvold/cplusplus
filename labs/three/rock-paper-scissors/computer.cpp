//
// Created by hans on 28/01/2018.
//
#include "computer.h"

vector<string> getComputer() {
    vector<string> computer;
    computer.emplace_back("scissors");
    computer.emplace_back("rock");
    computer.emplace_back("paper");
    return computer;
}

string nextComputerAction(const vector<string>& computer) {
    int magic = rand() % 3;
    string computerAction = computer.at(magic);
    return computerAction;
}