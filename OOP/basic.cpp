#include <iostream>
using namespace std;
class Person
{
    char name[20];
    int age;

public:
    int r;
    void getdata(void);
    void putdata(void);
};
void Person ::getdata(void)
{
    cout << "Enter Details: ";
    cin >> name;
    cin >> age;
    cin >> r;
}
void Person ::putdata(void)
{
    cout << name;
    cout << age;
    cout << r;
}
int main()
{
    Person a1, a2;
    a1.getdata();
    a1.putdata();
   
    a1.name;
    return 0;
}