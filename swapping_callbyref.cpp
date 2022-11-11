#include<iostream>
using namespace std;
void swapbyref(int*x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
     int a,b;
     cout<<"enter value a &b:";
     cin>>a>>b;

     cout<<"before swapping"<<endl;
     cout<<"a="<<a<<endl;
     cout<<"b="<<b<<endl;

     swapbyref(&a,&b);

     cout<<"after swapping"<<endl;
     cout<<"a="<<a<<endl;
     cout<<"b="<<b<<endl;
     return 0;
}