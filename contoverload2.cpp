#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
class area
{
    
    public:
    area( float a)
    {
        cout<<"area of cylinder is  "<<(1.0/3)*3.14*r*r*r;
    }
    area( float a,float b,float c)
    {
        
        cout<<"volume of cuboid  is  "<<a*b*c;
    }
    area(int a)
    {
        cout<<"volume of cube is  "<<a* a*a;
    }
    area( double a)
    {
        cout<<"volume of sphere is  "<<(4.0/3)*3.14*r*r*r;
    }
    };
int main()
{
    int a;
    float r,h,b,c;
    double l;
    cout<<"enter h,b,l of cuboid ";
    cin>>h>>b>>c;
    cout<<"enter l  ";
    cin>>l;
    cout<<"enter r for cylinder ";
    cin>>r;
     cout<<"enter side of cube";
    cin>>a;
    area e1( r );
    area e2( a);
    area e3( h,b,c );
    area e4( l  ); 
}
