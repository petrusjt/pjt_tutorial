#include <iostream>

/*void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}*/

template<class T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}
template<int>
void swap(int &a, int &b)
{
    a = a * b;
    b = a / b;
    a = a / b;
}


int main()
{
    int a = 4, b = 6;
    std::string c = "c", d = "d";
    swap(a,b);
    swap(c,d);
    std::cout << a << " " << b << " " << c << " " << d << " " << std::endl;

    return 0;
}