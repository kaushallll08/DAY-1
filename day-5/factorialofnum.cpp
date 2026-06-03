#include<iostream>
using namespace std;
int fact(int n){
    if(n<=1){
        return 1;
    }
    
   return n*fact(n-1);
    fact(n);

}
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<" "<<fact(i);
    }
    return 0;
}