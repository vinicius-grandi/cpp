#include <iostream>

int main(int argc, char const *argv[])
{
    int ages[] = { 2, 3, 10, 42 };

    for (auto age : ages)
    {
        std::cout << age << "\n";
    }

    return 0;
}

