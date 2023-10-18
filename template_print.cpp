#include <iostream>
using namespace std;

template <typename T>
ostream &print(ostream &os, const T &obj)
{
    return os << obj;
}

template <typename T, typename... Args>
ostream &print(ostream &os, const T &obj, const Args &...rests)
{
    os << obj << ' ';
    return print(os, rests...);
}

template<typename... Args>
void f(Args... rests)
{
    cout << sizeof...(Args) << "   ";
    cout << sizeof...(rests) << "    " << endl;
}

int main()
{
    print(cout, 1);
    cout << endl;
    string str1 = "1", str2 = "2", str3 = "zhouX";
    print(cout, str1, str2, str3);
    cout << endl;
    print(cout, 1, 2.098, str3);
    cout << endl;
    f(1, 1, 1);
}