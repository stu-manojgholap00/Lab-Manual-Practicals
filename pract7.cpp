// W.A.P. for addition of two complex numbers by using 
// friend function


#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
    public:
        void getdata()
        {
            cout<<"ENter Real and Imagenory="<<endl;
            cin>>real>>imag;
        }
        void putdata()
        {
            cout<<"Real="<<real<<endl;
            cout<<"Imagenory="<<imag<<endl;
        }
        friend  Complex sum(Complex,Complex);
};
Complex sum(Complex c1,Complex c2)
{
    Complex c3;
    c3.real=c1.real+c2.imag;
    c3.imag=c1.imag+c2.imag;
    return c3;
}
int main()
{
    Complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=sum(c1,c2);
    c3.putdata();
    return 0;
}

