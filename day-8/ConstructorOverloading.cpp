#include <iostream>
using namespace std;
class A
{
public:
    int rollNo;
    A()
    {
        cout << "default constructor" << endl;
    }
    A(int n)
    {
        cout<<"parameterized constructor"<<endl;
        rollNo = n;
        cout<<"roll no:"<<n;
    }
};

int main()
{
    A x;
    A x2(34);
return 0;
}