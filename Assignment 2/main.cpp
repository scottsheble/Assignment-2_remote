/********************************************************
    CSCI 240        Program 2       Fall 2023

    Programmer: Scott Sheble

    Section: 1

    Date Due: 9/15/2023

    Purpose: Compiler Training

    Created by scott sheble on 8/28/23.
*********************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int maxSquat = 0;
int maxBench = 0;
int maxDeadlift = 0;


int main()
{
    
    std::cout << "What is your max squat?";
    std::cin >> maxSquat;
    std::cout << "What is your max bench press?";
    std::cin >> maxBench;
    std::cout << "What is your max deadlift?";
    std::cin >> maxDeadlift;
    return 0;
}
