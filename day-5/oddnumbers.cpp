#include<iostream>
using namespace std;
int evenNumber(int n){
    if(0==n){
        return 0;
    }
    evenNumber(n-1);
if(n%2!=0){
   
 cout<<n<<endl;

}
   

}
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    evenNumber(n);
    return 0;
}