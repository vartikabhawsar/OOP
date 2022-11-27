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
    // test(test &p1)
    // {
    //     cout<<"copy contructor called";
    //     x=p1.x;
    //     y=p1.y;
    // }
    void display(test k)
    {
        cout<<"\n"<<k.x<<" "<<k.y;
    }
   
};

int main()
{
    test p1(10,20);
    cout<<"\nChecking";
    //test p2=p1;
    display(p1);//p1 is copied to k using copy contructor
    // test p3(9,7);
    // p3=p1;
    // p3.display();

    return 0;
}