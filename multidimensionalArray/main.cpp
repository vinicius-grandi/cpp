#include <iostream>

int main(int argc, char const *argv[])
{
    std::string cars[2][2] = {
        {"x", "y"},
        {"z", "w"}
    };

    std::cout << cars[0][1];
    return 0;
}

