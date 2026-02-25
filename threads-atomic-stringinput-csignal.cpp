// This script will be used to see if i understand how to open another thread and stop loops with atomic/csignal.
#include <iostream>
#include <atomic> // for threadsafe update
#include <csignal> // for updating atomic var & not killing program lmao
#include <thread>

#include <unistd.h>

// We'll use this variable as input for the loop 
std::atomic<bool> keepRunning(true);

// Will be used as our increment variable in the loop. 
// If a variable is going to be shared between threads it should be made atomic to avoid errors when reading.
std::atomic<int> seconds(0);

// Sleep for X seconds
double fsleep(double x) {
    return usleep(x * 1000000);
}

int countForever(){
    // initialize a starting number to increment
    std::cout << "How fast can you submit a number?" << '\n';
    fsleep(0.5);
    std::cout << "Starting loop..." << '\n';

    while(keepRunning){
        std::cout << "Seconds elapsed: " << seconds << '\n';
        seconds++;
        fsleep(1);
    }

    return seconds;
}

void stopCounting(int signum){
    std::cout << " Interrupt Signal: " << signum << " recieved. Updating atomic variable (killing loop)." << '\n';
    std::cout << "Props to you for killing the timer! You big fat cheater." << '\n';
    keepRunning = false;
}


int main(){

    // register our stopCounting function as the result of recieving a signal interrupt (pressing CTRL+C) - if we wanna stop the timer
    std::signal(SIGINT, stopCounting);

    // To create a new thread in the background of the program using <thread> you do the following:
    // call std::thread, give it a variable name, then give the thread a function to run in the background (sorta like how we're running main.)
    std::thread second_thread(countForever);

    // In the foreground we're going to wait for the user to write their name and then print out how long it took for them to write it.
    std::string userInput;
    std::getline(std::cin, userInput);

    // Stop the background thread running countForever
    keepRunning = false;

    // Now that the other thread is finished we should close it up (join it with the main thread.)
    second_thread.join();
    
    std::cout << "You wrote: " << userInput << "! It took you: " << seconds << " seconds to write and submit a number." << '\n';
    std::cout << "----- Program Finished -----" << std::endl;

    return 0;
}
