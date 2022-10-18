#include<iostream>

using namespace std;
class complex
{
    float x;//real
    float y;//img
    public:
    void display();
    complex(){}
    complex (float real,float img) 
    {
        x=real;
        y=img;
    }
    complex operator +(complex c);
};
complex complex ::operator +(complex c)
{
    complex c1;
    c1.x=x+c.x;
    c2.y=x+c.y;
    return c1;
}
complex complex ::operator -(complex c)
{
    complex c1;
    c1.x=x-c.x;
    c2.y=x-c.y;
    return c1;
}
void display()
{
    cout<<x<<" + "<<y<<"i "<<"\n";
}
int main()
{
    complex c2,c3,c4;
    c2=complex(2,3);
    c3=complex(5,4);
    int a;
    cout<<"enter 1 for add and 2 for sub";
    cin>>a;
    switch(a)
    {
        case 1:
        c4=c2+c3;
        cout<<c2.display();
        cout<<c3.display();
        cout<<c4.display();
        break;
        case 2:
        c4=c2-c3;
        cout<<c2.display();
        cout<<c3.display();
        cout<<c4.display();
        break;
    }
}