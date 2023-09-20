#include <iostream>
using namespace std;
class Foo
{
private:
    int *data;
    int len;

    void free() { delete[] data; }

public:
    Foo() = default;
    Foo(int n);
    Foo(const Foo &f);
    Foo(Foo &&f);
    Foo &operator=(const Foo &f);
    Foo &operator=(Foo &&f);
    ~Foo();
    void display()
    {
        for (auto i = 0; i < len; ++i)
        {
            cout << data[i] << ' ';
            
        }cout << endl;
    }
};
Foo::Foo(int len) : len(len)
{
    data = new int[len];
    for (auto i = 0; i < len; ++i)
        data[i] = i;
}
Foo::Foo(const Foo &f)
{
   
    len = f.len;
    data = new int[len];
    for (auto i = 0; i < len; ++i)
        data[i] = f.data[i];
}
Foo::Foo(Foo &&f)
{ 
    cout << "&&" <<"    ";
    data = f.data;
    f.data = nullptr;
    len = f.len;
}
Foo &Foo::operator=(const Foo &f)
{
    if (&f != this)
    {
        len = f.len;
        data = new int[len];
        for (auto i = 0; i < len; ++i)
            data[i] = f.data[i];
    }
    return *this;
}
Foo &Foo::operator=(Foo &&f)
{
    cout << "&&operate=       ";
    data = f.data;
    len = f.len;
    f.data = nullptr;
    return *this;
}
Foo::~Foo()
{
    free();
}

int main()
{
    Foo f(5) , ff(10);
    f.display();
    ff.display();

    Foo f1(f);
    f1.display();

    Foo f2(move(f));
    f2.display();

    Foo f3;
   f3 =  ff;
    f3.display();

    Foo f4;
   f4 =  move(ff);
    f4.display();
}