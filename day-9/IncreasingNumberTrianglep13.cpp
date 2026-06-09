#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
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


// outer loop
// for(char ch="A";ch<"A"+i;ch++){
// cout<<ch;
// }