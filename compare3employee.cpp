#include <iostream>
using namespace std;
class employee
{
    
    char name[20];
    float eno;
    float basic;
    float hra;
    float cca;
    float da;
    float pf;
    float netsal;
    public:
    void input()
    {
        cout<<"enter name eno and basic ";
        cin>>name;
        cin>>eno;
        cin>>basic;
    }
    void calculate()
    {
        hra=(40.0/100)*basic;
        da=(35.0/100)*basic;
        cca=(5.0/100)*basic;
        pf=(12.0/100)*basic;
        netsal = basic + hra + da + cca - pf;

    }
    float getNet()
    {
        return netsal;
    }
    void output()
    {
        
        cout<<name<<" ";
        cout<<eno<<" ";
        cout<<netsal<<" ";

    }
    void outdata()
    {
        cout<<netsal;
    }

};
int main()
{
    float max=0;
    int m=0;
    employee e1[3];
    for(int i=0;i<3;i++)
    {
    e1[i].input();
    e1[i].calculate();
    e1[i].output();

    
    if (e1[i].getNet() > max)
    {
    max=e1[i].getNet();
    m=i;
    }
    }
    cout<<max;
    e1[m].output();
}