#include <iostream>

using namespace std;

class Person
{
public:
    Person(){}
    Person(int kor, string nev)
    {
        age = kor;
        name = nev;
    }
    int get_age()
    {
        return age;
    }
    void set_age(int kor)
    {
        age = kor;
    }
    string get_name()
    {
        return name;
    }
    void set_name(string nev)
    {
        name = nev;
    }
private:
    int age;
    string name;
};

int main()
{
    Person p;
    p.set_age(15);
    p.set_name("Béla");
    cout << p.get_name() << "\t" << p.get_age() << endl;
    return 0;
}