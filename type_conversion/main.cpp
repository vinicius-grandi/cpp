#include<iostream>

int main(int argc, char const *argv[])
{
    // casting
    double x = (int) 3.15;
    std::cout << x << "\n";
    const bool FALSE = (bool) 0;
    std::cout <<  FALSE;

    int correct = 8;
    int questions = 10;
    // if any of the numbers used in a calculation is a double, then the compiler will use double logic
    double score = ((double) correct / questions) * 100;

    std::cout << "\nyour score is " << score;

    return 0;
}

