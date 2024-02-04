#include <iostream>

int main()
{
    int a = 1;
    int b = 2;
    std::cout << a + b << std::endl;

    double x = 1.5;

    std::cout << x << std::endl;

    char grade = 'A';

    std::cout << grade << std::endl;

    bool areYouOkay = false;
    std::cout << areYouOkay << std::endl;

    std::string name = "Jaime";
    int age = 23;

    std::cout << "Your name is " + name << "\n";
    std::cout << "and you are " << age << " years old";
    return 0;
}
