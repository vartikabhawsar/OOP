#include<iostream>
using namespace std;
class sample
{
    int a;
    int b;

public: 
 void setvalue()
{
    a=10;
    b=10;
}
friend int sum(sample s);

};
int sum (sample s)
{
    return s.a+s.b;
}
int main()
{
    sample s1;
    s1.setvalue();
    cout<<" sum is  "<<sum(s1)<<"\n";
    return 0;
}