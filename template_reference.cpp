#include<iostream>
using namespace std;

template<typename T>
void g(T && val)
{
    T temp = val;
    cout << &val << ' ' << &temp << endl;
}
int main()
{
    int i = 0;
    const int ci = i;
    g(i);
    g(ci);
    g(i * ci);
    g(i = ci);
}