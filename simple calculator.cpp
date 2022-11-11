#include<iostream>
using namespace std;

int main()
{
int m,n;
cout<<"enter two integers:-";
cin>>m>>n;
char op;
cout<<"enter an operator (+,-,*,/,%):";
cin>>op;
switch (op){
    case '+':cout<<m+n;break;
    case '-':cout<<m-n;break;
    case '*':cout<<m*n;break;
    case '/':cout<<m/m;break;
    case '%':cout<<m%n;break;
}
return 0;
}
