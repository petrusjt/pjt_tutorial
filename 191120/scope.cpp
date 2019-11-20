#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    {
        //int a = 3;
        cout << a << "\t";
    }
    {
        int a = 4;
        cout << a << "\t";
    }
    cout << a << endl;
    return 0;
}