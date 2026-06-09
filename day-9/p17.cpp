#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch='A';
    cout << "enter the number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int k = 1; k <= (n - i); k++)
        {
            cout << " ";
        }
        // alphabet
        char ch='A';
        int half=((2*i)-1)/2;
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout <<ch;
            if(j<=half){
                ch++;

            }
            else{
                ch--;
            }
        }
        cout << endl;
    }
    return 0;
}
