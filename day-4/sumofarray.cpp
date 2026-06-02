#include<iostream>
using namespace std;
int main()
{
    int marks[5]={50,66,77,88,90};
    int sum=0;
    
    for(int i=0;i<5;i++){
        sum += marks[i];
        cout<<sum<<endl;
    }
    return 0;
}