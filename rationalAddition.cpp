#include <iostream>
using namespace std;
class rational
{
    int num;
    int den;
    public:
    void input()
    {
        
        cout<<" enter numerator and denomenator  ";
        cin>>num>>den;

    }
    void add(rational k1,rational k2)
    {
        int f=1;
        num=k1.num*k2.den+k1.den*k2.num;
        den=k1.den*k2.den;
                int min=(num>den)?den:num;
                for(int i=0;i<min;i++)
                {
                    if(num%i==0&&den%i==0)
                    {
                     f=i;
                    }
                }
        cout<<"addition is"<<num/f << "/" <<den/f;
        }};
    int main()
    {
        rational r1 ,r2,r3;
        r2.input();
        r3.input();
        r1.add(r2,r3);
    }
