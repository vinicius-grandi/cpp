#include <iostream>

struct student
{
    std::string name;
    int age;
    bool enrolled;
    void sayMyName()
    {
        std::cout << "Hi my name is " << name << "\n";
    };
};
void listStudents(student *list, int size);

int main(int argc, char const *argv[])
{
    // structure to store multiple variables, support multiple data types

    student jaiminho = {
        "João",
        10,
        false
    };

    student mimir = {
        "Pedro",
        10,
        false
    };

    student students[] = { jaiminho, mimir };

    listStudents(students, 2);

    return 0;
}

void listStudents(student *list, int size) {
    for (int i = 0; i < size; i++)
    {
        std::cout << list[i].name << "\n";
        std::cout << list[i].age << "\n";
        std::cout << list[i].enrolled << "\n";
    }
};

