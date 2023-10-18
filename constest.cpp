#include<iostream>
using namespace std;
void f(const int i)
{
    cout << " const: " << i << endl;
}

void f(int const* i)
{
    cout << " const*: " << *i << endl;
}
void f(int *i)
{
    cout << " *: " << i << endl;
}
int main()
{
    int a = 0;
    const int b = 1;
    int *ptr_a = &a;
    int const *ptr_b = &b;
    f(a);
    f(b);
    f(ptr_a);
    f(ptr_b);
}