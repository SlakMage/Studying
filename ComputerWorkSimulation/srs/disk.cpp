//
// Created by Михаил on 9/7/2023.
//
#include "../include/disk.h"
#include <fstream>

void save (std::vector<int> x){
    std::ofstream saving("data.txt",std::ios::app);
    for (int i = 0; i< x.size(); i++){
        saving << x[i] << " ";
    }
}
int load () {
    std::ifstream loading;
    loading.open("data.txt");
    if (loading.is_open()) {
        int z;
        for (int i = 0; i < 8; i++) {
            loading >> z;
            write(z);
        }
    }
}