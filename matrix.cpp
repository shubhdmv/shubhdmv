#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j;

cout<<"matrix:-\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << "transform matrix:-\n";
    for (i = 2; i >= 0; i--)
    {
        for (j = 2; j >= 0; j--)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}