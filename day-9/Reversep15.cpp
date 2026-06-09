#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    for (int i = n; i>=1; i--)
    {
        char a='A';
        for (int j = 1; j <= i; j++)
        {
            cout << a<<" ";
            a++;
        }
        cout << endl;
    }
    return 0;
}