#include<iostream>
using namespace std;
int main(){

    int n;
   
    cout<<"enter number:";
    cin>>n;
    for(int i=1;i<=n;i++){
         int InitialValue=1;
        if(i%2==0){
            InitialValue=0;
        }

        for(int j=1;j<=i;j++){
            cout<<InitialValue;
            InitialValue=1-InitialValue;
        }
        cout<<endl;
    }
    return 0;

}