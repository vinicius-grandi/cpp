#include <iostream>

int main() {
    // memory that is allocated after the program is compiled

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << &pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    // always delete something on dynamic memory
    delete pNum;
    return 0;
}
