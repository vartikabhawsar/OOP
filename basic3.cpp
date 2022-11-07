#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
     void input()
    {
        cout<<"\n enter data";
        cin>>real>>img;
    }
    void output()
    {
        cout<<real<<"i + "<<img;
    }
    complex add(complex, complex);
};
complex complex :: add(complex t1,complex t2)
{
    complex t3;
    t3.real=t1.real+t2.real;
    t3.img=t1.img+t2.img;
    return t3;
}
void output()
{
    cout<<"  xyz";
}
int main()
{
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=c3.add(c1,c2);
    c3.output();
    output();
    return 0;
}