#include <iostream>
using namespace std;
int main()
{
    int *b = new int;

    cout << sizeof(b) << endl;
    cout << b
         << endl;
    delete b;
    cout << b;
}
