#include <memory>
#include <iostream>

using namespace std;
class debugdelete
{
private:
    ostream &os;

public:
    template<typename T>
    void operator()(T *p)const
    {
        os << "delete debug!" << endl;
        delete p;
    }

    debugdelete(ostream &s = cout) : os(s){}
};

int main()
{
    debugdelete d(cerr);
    unique_ptr<int, debugdelete> u(new int, debugdelete());
}