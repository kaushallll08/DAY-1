#include<iostream>
using namespace std;
int main()
{
    int marks[5]={50,66,77,88,90};
    int sum=0;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    // for (int i=0;i<=4;i++){
    //     cout<<marks[i]<<endl;
    // }

    for(int i=0;i<5;i++){
        cout<<"add:"<<(sum=sum+marks[i])<<endl;
    }
    return 0;
}