#include <iostream>
using namespace std;

class shubham
{
    int a, b, c;

public:
    void get();
    void sum();
    void sub();
    void multi();
    void divi();
};

void shubham::get()
{
    cout << "enter a:";
    cin >> a;
    cout << "enter b:";
    cin >> b;
}
void shubham::sum()
{
    c = a + b;
    cout << "sum of:" << c << endl;
}
void shubham::sub()
{
    c = a - b;
    cout << "sub of:" << c << endl;
}
void shubham::multi()
{
    c = a * b;
    cout << "multi of:" << c << endl;
}
void shubham::divi()
{
    c = a / b;
    cout << "divi of:" << c << endl;
}
int main()
{
    shubham s1;
    s1.get();
    s1.sum();
    s1.get();
    s1.sub();
    s1.get();
    s1.multi();
    s1.get();
    s1.divi();
     return 0;
}
