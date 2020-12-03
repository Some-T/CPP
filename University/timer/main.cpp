#include <chrono>
#include <iostream>
#include <iomanip>
#include <string>


int main() {
    using clock = std::chrono::system_clock;

    std::string line;
    //std::cout << "Press enter to start timer...\n"; // Automatically all start when the program begins?
    //std::getline(std::cin, line);

    auto start = clock::now();

    //std::cout << "Press enter to stop timer...\n"; // Replace with program end / termination return 0?
    //std::getline(std::cin, line);

    auto elapsed = clock::now() - start;

    auto seconds = std::chrono::duration_cast<std::chrono::seconds>(elapsed);
    auto milli = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed - seconds);

    std::cout << seconds.count() << "." << std::setw(3) << std::setfill('0') << milli.count() << " seconds elapsed\n";

    auto before = clock::now();

    {
        using sec      = std::chrono::seconds;
        using hr_clock = std::chrono::high_resolution_clock;
        using            std::chrono::duration_cast;

        auto before = hr_clock::now();

        while( true )
        {
            if( duration_cast<sec>( hr_clock::now() - before ).count() <= 10 )
            {
                continue;
            }
            std::cout << "10 seconds elapsed" << std::endl;
            //can put function or whatever else here.
            before = hr_clock::now();

        }
    }

}








// add mutex for greater speed and sync? e.g. https://docs.microsoft.com/en-us/windows/desktop/Sync/interprocess-synchronization

// for some simple syncing, you could set a timepoint in the future, say clock::now() + 3s, then std::this_thread::sleep_until that time point in all three programs, and have them all commence whatever at (more or less) the same time

// How to implement this into my code for robotics, get it to start the timer when I run the code?
