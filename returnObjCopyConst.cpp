#include <iostream>
using namespace std;
class test
{
    int x;
    int y;
    public:
    test(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
   test (){}
   test display(test k)
    {
        test t1;
       
        t1.x=k.x+2;
        t1.y=k.y+2;
        return t1;
    }
    void disp()
    {
        cout<<x<<" "<<y;
    }
   
};

int main()
{
    test p1(10,20);
    cout<<"\nChecking";
    test r=p1.display(p1);
    r.disp();
    return 0;
}