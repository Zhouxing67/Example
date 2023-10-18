#include <iostream>
#include <typeinfo>

class Person{
private:
    int age;
    static std::string name;

public :
    Person() = default;
    void get_age()
    {
        std::cout << age << std::endl;
    }

    static void get_name()
    {
        std::cout << name << std::endl;
    }
};

void display();
std::string Person::name = std::string("zhouX");
int main()
{/* 
    auto ptr = &Person::get_age;
    void (Person::*ptr1)(void) = &Person::get_age;
    void (*ptr2)(void) = &Person::get_name;
    Person *p = new Person();
    Person p1;
    (p->*ptr)();
    (p1.*ptr1)();
    Person::get_name();
    ptr2();
 */
    std::cout << typeid(display).name() << std::endl;
    std::cout << display << std::endl;
    std::cout << &display << std::endl;
    std::cout << typeid(&display).name() << std::endl;
}
void display()
{
    std::cout << "hello" << std::endl;
}