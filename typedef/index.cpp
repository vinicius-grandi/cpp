#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
using pairlist_t = std::vector<std::pair<std::string, int>>;

int main(int argc, char const *argv[])
{
    pairlist_t ages;
    ages.push_back({"João", 99});
    ages.push_back({"Paulo", 40});
    for (int i = 0; i < ages.size(); i++)
    {
        std::cout << "your name is " << ages[i].first << " and you're " << ages[i].second << " years old" << "\n";
    }

    return 0;
}
