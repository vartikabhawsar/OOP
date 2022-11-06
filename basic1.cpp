#include <iostream>
using namespace std;
class test
{
    int a;
    float b;
    public :
    void init(int a1, float b1)
    {
        a=a1;
        b=b1;
    }
    void output()
    {
        cout<<a<<b;
        cout<<a1;
    }
    int main()
    {
        test t;
        t.init(10,20);
        t.output();
    }
}