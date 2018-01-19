//
// Created by hans on 20/01/2018.
//
#include "bubblesort.h"

void bubblesort(vector<int> numbers) {
    for(int i = numbers.size() - 1; i >= 0; i--) {
        for(int j = 1; j <= i; j++) {
            if(numbers[j-1] > numbers[j]) {
                swap(numbers[j-1], numbers[j]);
            }
        }
    }
}
