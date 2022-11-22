#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
class area
{
    
    public:
    area( float a)
    {
        cout<<"area of circle is  "<<3.14*a*a;
    }
    area( float a,float b,float c)
    {
        float s;
        float ar;
        s=(a+b+c)/2;
        ar=s*(s-a)*(s-b)*(s-c);
        ar=pow(ar,0.5);
        cout<<"area of triangle is  "<<ar;
    }
    area(int a)
    {
        cout<<"area of square is  "<<a*a;
    }
    area( float a,float b)
    {
        cout<<"area of rectangle is  "<<a*b;
    }
    };
int main()
{
    int a;
    float r,h,l,br,b,c;
    cout<<"enter a,b,c of triangle ";
    cin>>h>>b>>c;
    cout<<"enter l and b ";
    cin>>l>>br;
    cout<<"enter r ";
    cin>>r;
     cout<<"enter side of square";
    cin>>a;
    area e1( r );
    area e2( a);
    area e3( h,b,c );
    area e4( l ,br ); 
}
