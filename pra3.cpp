#include<iostream>
using namespace std;
int main()
{
    // implicit type casting
    int a=10;
    float b=a;

    cout<<"Implicit TYpe casting is="<<endl;
    cout<<"Interger is ="<<a<<endl;
    cout<<"Float value is ="<<b<<endl;

    // Explicit tyoe casting

    float x=10.75l;
    int y=(int)x;
    cout<<"Explicit Type Casting"<<endl;
    cout<<"Integer value is ="<<y<<endl;
    cout<<"Float value is ="<<x<<endl;
    return 0;
}