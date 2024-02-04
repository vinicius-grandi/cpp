#include <iostream>

// namespace defines the scope of things

namespace first {
    int x = 1;
}

namespace second {
    int x = 3;
}

int main(int argc, char const *argv[])
{
    using namespace first;
    // "using" keyword will change the scope of the function
    // using std::string will include this method in the scope
    std::cout << first::x << "\n";
    std::cout << second::x;

    std::cout << "\n" << x;
    return 0;
}
