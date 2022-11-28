#include<iostream>
using namespace std;
class trainbooking
{
    int tno;
    int sno1;
    int sno2;
    int sno3;
    int bno1=0;
    int bno2=0;
    int bno3=0;
    public:
    trainbooking(int a,int b,int c)
    {
            sno1=a;
            sno2=b;
            sno3=c;
    }
    void book(int c , int n )
    {
        
        if(c==1)
        {
            if(n<=sno1-bno1)
            {
            bno1=bno1+n;
            }
        }
        else if(c==2)
        {
            if(n<=sno2-bno2)
            {
            bno2=bno2+n;
            }
           
        }
        else if(c==3)
        {
            if(n<sno2-bno2)
            {
            bno2=bno2+n;
            }
        }
            else cout<<"no seats available";
    }
    void cancel(int c,int b)
    {
        if(c==1)
        {
            if(bno1>=b)
            {
            bno1=bno1-b;
        }}
        else if(c==2)
        {
            if(bno2>=b)
            {
            bno2=bno2-b;
            }
        }
        else if(bno3>=b)
        {
            bno3=bno3-b;
    }}
    void display()
    {
        cout<<"\nno of seats "<<sno1+sno2+sno3;
        cout<<"\nbooked seats in class 1"<<bno1;
         cout<<"\nbooked seats in class 2"<<bno2;
          cout<<"\nbooked seats in class 3"<<bno3;
        cout<<"\nvacant seats in class 1 "<<(sno1)-(bno1);
        cout<<"\nvacant seats in class 1 "<<(sno2)-(bno2);
        cout<<"\nvacant seats in class 1 "<<(sno3)-(bno3);
    }
};
int main()
{
    int a,b; //seatno and class
    trainbooking t1(25,35,45);
    cout<<"enter the no of seats to be booked and the class  ";
    cin>>a>>b;
    t1.book(b,a);
    cout<<"do you want to cancel any booked seat ?\n";
    cout<<"if yes enter no. and class  ";
    cin>>a>>b;
    t1.cancel(b,a);
    t1.display();
    }




