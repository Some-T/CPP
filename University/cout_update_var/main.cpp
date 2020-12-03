#include <iostream>

int main() {


    int loopVar;
    string increasedVar = "Testing";


    for (loopVar = 0; loopVar <= 50; loopVar++) {
    std::cout << "\r" << increasedVar << std::endl;

    system("cls");
    }
    return 0;
}

/* steps of five: increasedVar += 5*/
