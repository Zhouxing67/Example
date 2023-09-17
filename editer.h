#ifndef EdITER
#define EdITER

#include<bits/stdc++.h>
using namespace std;

class sales_data
{
  public :

  void display()
    {cout << "This is a test class" << endl;}
};

template<typename T>
bool compare(const T &ob1, const T &ob2)
{
    return ob1 < ob2;
}

#endif