#include<iostream>
int main()
{
    int a = 0;
    const int b = a;
    int &ra = a;
    const int cra = a;
    std::cout << "a:" << a << ' ' << "b:" << b << ' ' << "ra:" << ra << " cra:" << cra;
    std::cout << std::endl;
    a = 1;
    std::cout << "a:" << a << ' ' << "b:" << b << ' ' << "ra:" << ra << " cra:" << cra;

}