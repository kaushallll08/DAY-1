#include <iostream>
using namespace std;
class Bank
{
private:
    int bankBalance = 5000;

public:
    void getBankBalance()
    {
        cout << bankBalance;
    }
};
int main()
{
    Bank b1;
    b1.getBankBalance();
    return 0;
}
