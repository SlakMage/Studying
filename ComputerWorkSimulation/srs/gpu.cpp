//
// Created by Михаил on 9/7/2023.
//
#include "../include/gpu.h"
#include "iostream"

void display(std::vector<int> x){
    for (int i = 0; i< x.size(); i++){
        std::cout << x[i] << " ";
    }
    std::cout << std::endl;
}