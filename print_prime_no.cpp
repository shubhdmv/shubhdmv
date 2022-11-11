#include<iostream>
using namespace std;

int main()
{
    int a,b=0,j;
    cout<<"enter no:";
    cin>>a;
    for(int i=2; i<=a; i++)
    {
       b=0;
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
        {
           b++;
        }
        }
        if(b==2)
        {
            cout<<i<<endl;
        }
    }
    return 0;

}