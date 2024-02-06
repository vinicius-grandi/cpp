#include <iostream>

int main(int argc, char const *argv[])
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.empty()) {
        std::cout << "You can't do that\n";
        return 1;
    }

    if (name.length() > 10) {
        std::cout << "That's some big a## name!\n";
    } else {
        std::cout << "That's some short a## name!\n";
    }

    // jaime
    // name.clear() //

    // name.append("@gmail.com") // jaime@gmail.com

    // name.at(0) // j

    // name.insert(0, "@") // @jaime
    // name.insert(1, "@") // j@aime

    // name.find('j') // 0

    // name.erase(start, end) // end is not inclusive
    // name.erase(0, 3) // me
    return 0;
}
