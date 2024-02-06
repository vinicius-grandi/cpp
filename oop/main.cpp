#include <iostream>

class Human {
    private:
        std::string name;
        std::string occupation;
        int age;
    public:
        std::string getName() {
            return name;
        }
    Human(std::string n, std::string o, int a) {
        this->name = n;
        this->age = a;
        this->occupation = o;
    }
};

int main(int argc, char const *argv[])
{
    Human human = Human("jaime", "pedreiro", 20);
    std::cout << human.getName();
    return 0;
}
