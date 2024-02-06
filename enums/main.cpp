#include <iostream>

enum Day
{
    sunday = 0,f
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

int main(int argc, char const *argv[])
{
    Day today = monday;
    switch (today)
    {
    case monday:
        std::cout << "today is monday!!";
        break;
    case tuesday:
        std::cout << "today is tuesday!!";
        break;
    case wednesday:
        std::cout << "today is wednesday!!";
        break;
    case thursday:
        std::cout << "today is thursday!!";
        break;
    case friday:
        std::cout << "today is friday!!";
        break;
    case saturday:
        std::cout << "today is saturday!!";
        break;
    case sunday:
        std::cout << "today is sunday!!";
        break;
    default:
        break;
    }
    return 0;
}
