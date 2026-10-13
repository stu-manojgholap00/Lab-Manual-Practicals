#include<iostream>
using namespace std;
class Student 
{
    int roll_no;
    char name[50];
    float per;
    int Enrollment;

    public:
        void getdata()
        {
            cout<<"Enter name, roll Number and Percentage =";
            cin>>name>>roll_no>>per;
        }
        void putdata()
        {
            cout<<"Name is ="<<name<<endl;
            cout<<"Roll Number is ="<<roll_no<<endl;
            cout<<"Peercentage is ="<<per<<endl;
        }

};
int main()
{
    Student s;
    s.getdata();
    s.putdata();
    return 0;
}