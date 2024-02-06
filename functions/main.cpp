#include <iostream>

std::string happyBirthday(std::string n) {
    return "Happy birthday " + n + "\n";
}

int main(int argc, char const *argv[])
{
    std::string name;

    std::cout << "Who should I give my happy birthday to? \n";

    std::getline(std::cin, name);

    std::cout << happyBirthday(name);

    return 0;
}

