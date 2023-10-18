
#include<iostream>
struct Dereference
{
    int *data;
    Dereference(int a) : data(new int(a)){};
    void display()
    {
        std::cout << *data << std::endl;
    }
};

int main()
{
    Dereference *d = new Dereference(1);
    d->display();
    Dereference d1(3);
    ++*d1.data;
    d1.display();
}
