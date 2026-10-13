#include<iostream>
#include<iomanip>
using namespace std;
class Demo
{
private:
    int a,b,c;
public:
    void getdata();
    // void calculate();
    void putdata();
};
void Demo::getdata()
{
    cout<<"Enter a as a integer and 4 digit=="<<endl;
    cin>>a;
    cout<<"Enter b as a Float ="<<endl;
    cin>>b;
    
}
void Demo::putdata()
{
    cout<<setw(5)<<a<<endl;
    cout<<setfill('*')<<a<<endl;
    cout<<setprecision(3)<<b<<endl;
}
int main()
{
    Demo d1;
    d1.getdata();
    d1.putdata();
}
