#include <iostream>
#include "Operation.h"
#include <iomanip>
#include <windows.h>


int main() {
    double x,y;
    //setlocale(LC_ALL,"Russian");
    //SetConsoleOutputCP(1251);
    //SetConsoleCP(1251);
    std::cout << "Operation start, where we should cut this body?:) ";
    std::cin >> x >> y;
    scalpel(x,y);
    hemostat(x);
    tweezers(y);
    suturu(y,x);
    return 0;
}
