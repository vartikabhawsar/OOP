#include <iostream>
using namespace std;
class student
{
char name [20];
int rno;
public:
void display()
{
cout<<name<<" : ";
cout<<rno<<"  ";
}
void getb()
{

cout<<"enter name and roll of the student  ";
cin>>name;
cin>>rno;
}};

class faculty
{

char sub[20];
int marks;
public:
void geta()
{
cout<<"enter sub and marksAlloted to the student  ";
cin>>sub;
cin>>marks;
}
void display()
{

cout<<"average "<<marks/5;
}};
class result: public student, public faculty
{
public:
//void getF()
// {
// student::get();
// faculty::get();
//}
void show()
{
student::display();
faculty::display();
}
};
int main()
{
result r1;
r1.getb();
r1.geta();
r1.show();
return 0;
}