#include <iostream>

int main(int argc, char const *argv[])
{
    int numbers[] = {2, 10, 6, 3, 1, 0, 9};

    int count = sizeof(numbers) / sizeof(numbers[0]);

    int temp;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            int subNext = numbers[j] - numbers[j + 1];

            if (subNext > 0)
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    std::cout << "[";
    for (int n : numbers)
    {
        std::cout << n << ",\n";
    }
    std::cout << "]";

    return 0;
}
