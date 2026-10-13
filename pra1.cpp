#include<iostream>
using namespace std;
class Employee
{
    int a,b,c;
    public:
        void getdata()
        {
            cout<<"Enter a and b:"<<endl;
            cin>>a>>b;
        }
        void putdata();
        void display();
};
void Employee::putdata()
{
    c=a+b;
}
void Employee::display()
{
    cout<<"Sum of this two Numbers is="<<c<<endl;
}
int main()
{
    Employee e;
    e.getdata();
    e.putdata();
    e.display();
    cout<<endl;
    cout<<"Thank you !!"<<endl;

}