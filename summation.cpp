#include<iostream>
using namespace std;

int main()
{
int n,r,sum=0;
cout<<"enter no:";
cin>>n;

while(n>0)
{
    r=n%10;
    sum=sum+r;
    n=n/10;
}
cout<<"summetion="<<sum;
return 0;
}