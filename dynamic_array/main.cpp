#include <iostream>

int main(int argc, char const *argv[])
{
    char *pGrades = NULL;

    int size;
    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "insert grade: "
                     "<\n";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << "Grade " << i + 1 << ")" << " " << pGrades[i] << "\n";
    }

    delete[] pGrades;
    return 0;
}
