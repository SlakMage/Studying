//
// Created by Михаил on 9/7/2023.
//
#include <iostream>
#include "../include/kbd.h"
#include "../include/ram.h"
void input (){
    int x;
    for(int i = 0; i < 8; i++) {
        std::cin >> x;
        write(x);
    }
}