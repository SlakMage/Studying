#include <iostream>
#include "../include/ram.h"
#include "../include/disk.h"
#include "../include/cpu.h"
#include "../include/kbd.h"
#include "../include/gpu.h"




int main() {
    std::string command;
    while (command == "exit") {
        std::cout << "Enter command" << std::endl;
        std::cin >> command;
        if(command == "sum"){
            compute(y);
        }else if(command == "save"){
            save(y);
        }else if(command == "load"){
            load();
        }else if(command == "input"){
            input();
        }else if(command == "display"){
            display(y);
        }
    }
    return 0;
}
