#include<iostream>
using namespace std;
class Addition
{
    int a,b,c;
    public:
        void getdata()
        {
            cout<<"Enter a,b="<<endl;
            cin>>a>>b;
        }
       inline  void calculate()
        {
            c=a+b;
        }
      inline  void putdata()
        {
            cout<<"Addition of the number is ="<<c;
        }
};
int main()
{
    Addition a;
    a.getdata();
    a.calculate();
    a.putdata();
    return 0;
}