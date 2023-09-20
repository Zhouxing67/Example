#include <iostream>
using namespace std;
class fun
{
private:
    int times;


public:
    void display()
    {
        cout << times << endl;
    }

    int operator()(int n)
    {
        if (n == 1)
            return 1;
        else if (n == 2)
        {
            return 2;
        }
        else
            return (*this)(n - 1) + (*this)(n - 2);
    }
    fun() = default;

};

int main()
{
    fun f;
    auto i = f(5);
    f.display();
    cout << i;
}