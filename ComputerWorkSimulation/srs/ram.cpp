//
// Created by Михаил on 9/7/2023.
//
#include "../include/ram.h"

std::vector<int> y;

void write(int x){
    if(y.size() >= 8){
        for ( int i = 0; i < 8; i++){
            y.pop_back();
        }
    }
    y.push_back(x);
}

std::vector<int> read(){
    return y;
}