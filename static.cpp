#include <iostream>
#include<string.h>
using namespace std;
class employee
{
     char name[20];
     char desig[10];
     float sal;
     
    static float s;
    static float c;
    public:
     void input()
    {
        cout<<"enter name, desig, sal  :  ";      
        cin>>name;
        cin>>desig;
        cin>>sal;
        
        if(strcmp(desig,"manager") == 0)
        {
         cout<<"help";   
         s=sal+s;
         c++;
        }
    }
    void output()
    {
       cout<<strlen(desig)<<" ";
        cout<<name<<" ";
        cout<<desig<<" ";
        cout<<sal<<" ";
    }
    static void average()
    {

        cout<<"average salary of manager is "<<  s/ c;
    }};
   
    float employee ::s=0;
    float employee ::c=0;


int main()
{
    employee e1[3];
    for(int i=0;i<3;i++)
    {
    e1[i].input();
    e1[i].output();
    
}
employee::average();
}