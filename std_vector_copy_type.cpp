#include<iostream>
#include<vector>
int main()
{
    int *p = new int(1);
    std::vector<int *> v(10, new int(1));
    for(auto i : v)
        std::cout << i << std::endl;
}