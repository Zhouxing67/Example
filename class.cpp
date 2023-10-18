#include <iostream>
class cla
{
public:
    int mem1;
    int *mem2;
};
int main()
{
    cla c;
    std::cout << c.mem1 << std::endl;
    std::cout << c.mem2 << std::endl;
    std::cout << sizeof(cla) << std::endl;
    int s(1);
    int ss;
    std::cout << s << " " << ss << std::endl;
}
