#include <iostream>
#include<string.h>
using namespace std;
class bloodbank
{
     char name[20];
     char bg[20];
     int phn ;
     char add[20];
    static int c;
    public:
     void input()
    {
        cout<<"enter name, bg, phn, add :  \n";      
        cin>>name;
        cin>>bg;
        cin>>phn;
        cin>>add;
        
        if(strcmp(bg,"ab+") == 0)
        {
         c++;
        }
    }
    void output()
    {
        cout<<name<<" ";
        cout<<bg<<" ";
        cout<<phn<<" ";
        cout<<add<<" ";
    }
    static void count()
    {

        cout<<"count of ab+  "<<  c;
    }};
   
    
    int bloodbank ::c=0;


int main()
{
    bloodbank e1[3];
    for(int i=0;i<3;i++)
    {
    e1[i].input();
    e1[i].output();
    
}
bloodbank::count();
}