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
int powerliftingTotal = 0;
static int leftColumnSpaces = 20;
static int rightColumnSpaces = 8;
static float wilksCoefficient = 0.5976;
float wilksScore = 0;


int main()
{
    
    std::cout << "What is your max squat? ";
    std::cin >> maxSquat;
    std::cout << "What is your max bench press? ";
    std::cin >> maxBench;
    std::cout << "What is your max deadlift? ";
    std::cin >> maxDeadlift;
    powerliftingTotal = (maxSquat + maxBench + maxDeadlift);
    wilksScore = powerliftingTotal * wilksCoefficient;
    std::cout << endl;
    std::cout << left << setw(leftColumnSpaces) << "Max Squat: " << right << setw(rightColumnSpaces)  << maxSquat << std::endl;
    std::cout << left << setw(leftColumnSpaces) << "Max Bench Press: " << right << setw(rightColumnSpaces)  << maxBench << std::endl;
    std::cout << left << setw(leftColumnSpaces) << "Max Deadlift: " << right << setw(rightColumnSpaces)  << maxDeadlift << std::endl;
    std::cout << endl;
    std::cout << left << setw(leftColumnSpaces) << "Powerlifting Total: " << right << setw(rightColumnSpaces)  << powerliftingTotal << std::endl;
    std::cout << left << setw(leftColumnSpaces) << "Wilks Score: " << right << setw(rightColumnSpaces) << fixed << setprecision(3) << wilksScore << std::endl;
    std::cout << endl;
    return 0;
}
