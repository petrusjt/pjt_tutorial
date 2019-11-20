#include <iostream>

//using namespace std;

namespace person{
    void print_person_name(std::string name)
    {
        std::cout << name << std::endl;
    }
}

int main()
{
    std::cout << "Hello world!" << std::endl;
    person::print_person_name("Béla");
    return 0;
}