#include <iostream>

int arraySize(int total, int type) {
    return total / type;
}

int main(int argc, char const *argv[])
{
    const std::string NAMES[] = {"Jaime", "Jorge", "Paulo", "Maria"};

    int length = arraySize(sizeof(NAMES), sizeof(std::string));

    for (int i = 0; i < length ; i++)
    {
        std::cout << NAMES[i] << "\n";
    }


    return 0;
}