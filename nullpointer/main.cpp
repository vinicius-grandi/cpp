#include <iostream>

int main(int argc, char const *argv[])
{
    int *pointer = nullptr;
    int x = 123;

    //pointer = &x;

    if (pointer == nullptr) {
        std::cout << "address was not assigned!\n";
    } else {
        std::cout << "address was assigned: " << *pointer << "\n";
    }

    return 0;
}

