#include<iostream>
using namespace std;
int main()
{

    // UnARY OPERATOR
    // int a=10;
    // cout<<a++;
    // cout<<++a;



    // RELATIONAL OPERATOR
//     int x=10,y=20;
//    cout<<(x==y)<<endl;
//    cout<<(y!=x)<<endl;
//    cout<<(x>y)<<endl;
//    cout<<(x<y)<<endl;
//    cout<<(x>=y)<<endl;
//    cout<<(x<=y)<<endl;


//    LOGICAL OPERATOR
    // int a=10,b=20;  
    // cout<<(a>5 && b<19)<<endl;
    // cout<<(a>5 || b<19)<<endl;
    // cout<<!(a>5 && b<19)<<endl;

    // X-Or operator
    int x=5,y=10;
    cout<<(!(x>5) ^ !(y>15))<<endl;
    return 0;
}