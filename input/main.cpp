#include<iostream>

int main(int argc, char const *argv[])
{
    std::string name;

    std::cout << "Now, what is your age?" << "\n";
    int age;
    // when you input your name, a new line character will also be included, like name\n
    std::cin >> age;
    std::cout << "I see, you are " << age << "\n";
    // character input
    std::cout << "What is your name?\n";
    // cin doesn't support empty lines
    //std::cin >> name;

    // the new line character included there will be read here, which result in an "empty" line
    // std::ws white spaces remover
    std:getline(std::cin >> std::ws, name);
    std::cout << "your name is " + name << "\n";
    return 0;
}

