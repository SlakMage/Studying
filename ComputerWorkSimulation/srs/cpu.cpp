//
// Created by Михаил on 9/7/2023.
//
#include "../include/cpu.h"
#include <iostream>

void compute (std::vector<int> x){
    int y = 0;
    for (int i = 0; i < x.size(); i++){
        y += x[i];
    }
    std::cout << y;
}
