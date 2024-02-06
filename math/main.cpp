#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    double x = 3;
    double y = 4;
    double z;
    double w;

    // return the greater number between the arguments
    z = std::max(x, y);

    std::cout << z << "\n";

    // return the minimum between two values
    w = std::min(x, y);

    std::cout << w << "\n";

    // pow -- math
    std::cout << pow(y, 2) << "\n";

    // square root
    std::cout << sqrt(25) << "\n";

    // absolute number
    std::cout << abs(-25) << "\n" << abs(25) << "\n";

    // round
    std::cout << round(3.5) << "\n";
    std::cout << round(3.55) << "\n";
    std::cout << round(3.4) << "\n";

    // round up
    ceil(4.1); // 5

    // round down
    floor(4.9); // 4

    return 0;
}

