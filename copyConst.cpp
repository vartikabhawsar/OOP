// #include<iostream>
// using namespace std;
// class student
// {
//     char name[20];
//     int roll;
//   public:
//     student(char *n,int r)
//     {
//         strcpy(name,n);
//         roll=r;
//     }
   /* student(student s)
    {
       
        strcpy(name,s.name);
        roll=s.roll;

    }*/
//     void display()
//     {
//         cout<<"\n"<<name<<"  "<<roll;
//     }
// };
//     int main()
//     {
//         student s1("vartika",12);
//         student s2(s1);
//         s2.display();
//     }
#include <iostream>
using namespace std;
class test
{
    int x;
    int y;
    public:
    test(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    test(test &p1)
    {
        cout<<"copy contructor called";
        x=p1.x+1;
        y=p1.y;
    }
    void display()
    {
        cout<<"\n"<<x<<" "<<y;
    }
   
};

int main()
{
    test p1(10,20);
    cout<<"\nChecking";
    test p2=p1;
    p2.display();
    test p3(9,7);
    p3=p1;
    p3.display();

    return 0;
}
