#include <iostream>

int main(int argc, char const *argv[])
{
    std::string ages[] = {"1", "2", "3", "4"};

    // sizeof return size in bytes
    // size of array divided by size of the array type = number of elements
    std::cout << (sizeof(ages) / sizeof(std::string)) << "\n";
    return 0;
}
