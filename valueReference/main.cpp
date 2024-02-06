#include <iostream>

void swap(std::string a, std::string b);
void swap(std::string &a, std::string &b, bool originalReference);

int main(int argc, char const *argv[])
{
    std::string cupX = "Coca";
    std::string cupY = "Tubaína";

    // it will just pass a copy of the original values
    swap(cupX, cupY);
    std::cout << cupX << "\n";
    std::cout << cupY << "\n";

    swap(cupX, cupY, true);
    std::cout << cupX << "\n";
    std::cout << cupY << "\n";

    return 0;
}

void swap(std::string a, std::string b)
{
    std::string cupTemp;
    cupTemp = a;
    a = b;
    b = cupTemp;
}

void swap(std::string &a, std::string &b, bool originalReference)
{
    std::string cupTemp;
    cupTemp = a;
    a = b;
    b = cupTemp;
}
