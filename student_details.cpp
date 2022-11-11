#include<iostream>
using namespace std;

struct student{
    char name[10];
    int rollno;
    float marks;
};

int main()
{
    struct student s1,s2,s3;
    cout<<"enter name:";
    cin>>s1.name;

    cout<<"enter rollno:";
    cin>>s1.rollno;

    cout<<"enter marks";
    cin>>s1.marks;

    cout<<endl;

    cout<<"student details:-"<<endl;
     cout<<"name:"<<s1.name<<endl;
      cout<<"rollno:"<<s1.rollno<<endl;
       cout<<"marks:"<<s1.marks<<endl;
return 0;
}