#include<iostream>
using namespace std;
class Second;

class First
{
    int a;
    public:
        void getdata()
        {
            cout<<"Enter a = "<<endl;
            cin>>a;
        }
        friend void putdata(First , Second);
};
class Second 
{
    int b;
    public:
        void getdata()
        {
            cout<<"Enter b="<<endl;
            cin>>b;
        }
        friend void putdata(First,Second);
        
};        
void putdata(First f1,Second s1)
{
    if(f1.a > s1.b)
    {
         cout<<"A is Greater than B \t a="<<f1.a<<endl;
    }
    else{
        cout<<"B is Greater Than A"<<endl;
    }
}
int  main()
{
    First f1;
    Second s1;
    f1.getdata();
    s1.getdata();
    putdata(f1,s1);
    return 0;
}