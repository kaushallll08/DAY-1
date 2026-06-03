#include<iostream>
using namespace std;
int greet(int n){
    if(0==n){
        return 0;
    }
    
   return n+greet(n-1);
    greet(n);

}
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    cout<<greet(n);
    return 0;
}