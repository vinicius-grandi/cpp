#include <iostream>

int sumSub(int a, int b) {
    return a + b;
}

int sumSub(int a, int b, int c) {
    return a + b - c;
}

int main(int argc, char const *argv[])
{
    std::cout << sumSub(1, 2) << "\n";
    std::cout << sumSub(1, 2, 3) << "\n";
    return 0;
}

