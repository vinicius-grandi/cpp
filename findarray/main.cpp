#include <iostream>

int searchArray(int array[], int size, int element);

int main(int argc, char const *argv[])
{
    int numbers[] = {2, 5, 10, 124, 2102};
    int desiredNum;

    std::cout << "Which number do you want to find?\n";
    std::cin >> desiredNum;
    int index = searchArray(numbers, sizeof(numbers) / sizeof(numbers[0]), desiredNum);
    if (index != -1)
    {
        std::cout << "Your desired number was found! The index is " << index << "\n";
    }
    else
    {
        std::cout << "Your desired number was not found!";
    }
    return 0;
}

int searchArray(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}
