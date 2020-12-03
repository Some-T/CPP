// The below code is based on: https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution

#include <random>
#include <iostream>
#include <ctime>
#include <windows.h>


int random0() {
    static std::mt19937 mt_rand(std::time(nullptr));
    int min = 0, max = 1;
    std::uniform_int_distribution<int> distribution(min, max);
    int i = distribution(mt_rand);
    std::cout << "OPTION: " << i << std::endl;
    return i;
}


int random1() {
static std::mt19937 mt_rand(std::time(nullptr));
int min = 100, max = 360;
std::uniform_int_distribution<int> distribution(min, max);
int j =  distribution(mt_rand);
//std::cout << j << std::endl;
return j;
}

int random2() {
    static std::mt19937 mt_rand(std::time(nullptr));
    int min = -360, max = -100;
    std::uniform_int_distribution<int> distribution(min, max);
    int k =  distribution(mt_rand);
    //std::cout << k << std::endl;
    return k;
}

int speed = 50;

int main()
{


// Make sure to use endl on all cout's or this: https://support.microsoft.com/en-gb/help/94227/how-to-flush-the-cout-buffer-in-visual-c
    Sleep(500); // Waits 1 seconds thus it is in ms

    for (speed = 50; speed <= 200; speed++) {
        Sleep(500);
        std::cout << "SPEED / VELOCITY: " << speed << std::endl;
        if (speed >= 85) { // THIS FUNCTION IS NOT INITIATING WHEN SPEED MAXIMUM IS SET TO AN HIGHER NUMBER IN THE FOR LOOP.
            speed = 50;

            if (random0() & 1) { std::cout << "TURNS LEFT AT: " << random1() << " DEGREES!" <<  std::endl; }
            else { std::cout << "TURNS RIGHT AT: " <<  random2() << " DEGREES!" <<   std::endl; }
        }
    }



    return 0;
}

