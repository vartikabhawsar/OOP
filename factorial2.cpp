#include <iostream>

using namespace std;
class factorial
{
    int n;
    int f;

public:
    void indata()
    {
        cout << "Enter n : \n";
        cin >> n;
    }
   
    // int calc()
    // {
    //     f=1;
    //     for (int i = n; i >=1 ; i--)
    //     {
    //         f=i*f;
            
    //     }
    //     return f;
    // }
    int calc(int n)
    {
        
        
     f=1;
    if(n>1)
    {
        f=n*calc(n-1);

    }
    return f;

    }

    void output()
    {
        
        int a=calc(n);
        cout << "factorial is: " << a <<"\n";
    }
    
};
int main()
{
    factorial f;
    f.indata();
   
    f.output();
}