#include<iostream>
using namespace std;
class complex
{
    float x;//real
    float y;//img
    public:
    void display();
    
    complex (int real, int img) 
    {
        x=real;
        y=img;
    }
    complex operator +(complex ca);
    complex operator -(complex cb);
};
complex complex::operator +(complex ca)
{
    complex c1(0,0);  //c4    0,0 for constructor
    c1.x=x+ca.x;
    c1.y=y+ca.y;
    return c1;  //c4
}
complex complex::operator -(complex cb)
{
    complex c5(0,0);   //c4
    c5.x=x-cb.x;
    c5.y=y-cb.y;
    return c5;      //c4
}
 void complex :: display(void)
{
    cout<< x <<" + "<< y <<"i "<<"\n";
}
int main()
{
    complex c4(0,0);  //for constructor agar contructor nai lete to input() banate
    complex c2(2,3);
    complex  c3(5,4);
    int a;
    cout<<"enter 1 for add and 2 for sub";
    cin>>a;
    switch(a)
    {
        case 1:
        c4=c2+c3;
        c2.display();
        c3.display();
    
        c4.display();
       
        break;
        case 2:
        c4=c2-c3;
        c2.display();
        c3.display();
    
        c4.display();
       
        break;
        default:
        cout<<"invalid";


    }
    
}