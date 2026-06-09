#include<iostream>
using namespace std;
int main(){
int star;
    int n;
    cout<<"enter number:";
    cin>>n;
    for(int i=1;i<=(2*n)-1;i++){
         star=i;
        if(i>n){
            star=(2*n)-i;
        }
        for(int j=1;j<= star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
   
    return 0;
}

  