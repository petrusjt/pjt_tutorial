#include <iostream>

using namespace std;

class Person
{
public:
    Person(){}
    Person(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
    int get_age()
    {
        return age;
        //return this->age;
    }
    void set_age(int age)
    {
        this->age = age;
    }
    string get_name()
    {
        return name;
        //return this->name;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    class Car
    {
    public:
        string license_plate;
        string brand;
    };
    Car car;
private:
    int age;
    string name;
};

int main()
{
    Person *p = new Person(15, "Béla");
    //p->set_age(15);
    //p->set_name("Béla");
    cout << p->get_name() << "\t" << p->get_age() << endl;

    Person::Car c;
    c.brand = "Ford";
    c.license_plate = "AAA-111";
    delete p;
    return 0;
}