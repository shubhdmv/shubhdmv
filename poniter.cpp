#include<iostream>
using namespace std;

int main()
{
int a=20;
int *p;
int **ptr;
p=&a;
ptr=&p;

cout<<a<<endl;
cout<<"address of a="<<p;
cout<<"\na="<<*p;
cout<<"\nadd of p="<<ptr;
cout<<"\naddress of a="<<*ptr;
cout<<"\n a="<<**ptr;

return 0;
}