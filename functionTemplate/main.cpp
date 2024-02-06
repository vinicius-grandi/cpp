#include <iostream>

template <typename T, typename U>
T max(T x, U y) {
    return (x > y) ? x : y;
}

int main(int argc, char const *argv[])
{
    // generic types lol
    std::cout << max(2, 1.1) << "\n";
    return 0;
}

