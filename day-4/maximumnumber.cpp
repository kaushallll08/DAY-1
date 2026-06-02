#include<iostream>
using namespace std;
int main(){
    int max=0;
    int a[5]={50,42,77,88,90};
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"max:"<<max<<endl;
    return 0;
}