#include<iostream>

int main(int argc, char const *argv[])
{
    std::string name;

    // character input
    std::cout << "What is your name?\n";
    std::cin >> name;
    std::cout << "your name is " + name << "\n";
    return 0;
}

