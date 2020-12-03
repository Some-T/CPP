#include <iostream>
#include "main.h"

testwords state = TESTWORD3;

int main() {
    for (size_t timer = 1;; timer++) {
        switch (state) {
            case TESTWORD1:
                if (timer >= 1000 && timer <= 1001) {
                    std::cout << timer << std::endl;
                    std::cout << "NOW OVER 1000!" << std::endl;
                    return 0;
                }
                break;

            case TESTWORD2:
                std::cout << timer << std::endl;
                std::cout << "HIT 501" << std::endl;
                state = TESTWORD3;
                break;

            case TESTWORD3:
                if (timer >= 1 && timer <= 999) {
                    std::cout << timer << std::endl;
                    std::cout << "NOT OVER 500 OR HIT 1000 YET!" << std::endl;
                }
                    if (timer == 500) { state = TESTWORD2; }
                    if (timer == 1000) { state = TESTWORD1; }
                    break;

        }
    }
}
