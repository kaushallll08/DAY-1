#include<iostream>
using namespace std;
void greet(int n){
    if(0==n){
        return;
    }
   
    greet(n-1);
 cout<<n<<endl;

}
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    greet(n);
    return 0;
}