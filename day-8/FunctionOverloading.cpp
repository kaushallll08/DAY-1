#include <iostream>
using namespace std;
class A
{
public:
    // int rollNo;
    int sum(int a,int b){
        return a+b;
    }
    int sum(int a, int b, int c){
        return a+b+c;
    }
    
};

int main()
{
    A x;
    cout<<x.sum(5,5)<<endl;
    cout<<x.sum(5,5,5);
    
return 0;
}