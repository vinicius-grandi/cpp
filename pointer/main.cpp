#include <iostream>

int main(int argc, char const *argv[])
{
    // variable that stores the address of another variable
    std::string name = "Vinum";

    std::string *pName = &name;

    // * dereference operator
    // * allows you to access the value stored on the original variable that the pointer is pointing to

    std::cout << *pName << "\n";

    std::string pizzas[] = {"pizza1", "pizza2", "pizza3"};

    std::string *pPizzas = pizzas;

    return 0;
}

