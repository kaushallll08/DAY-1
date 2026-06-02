#include<iostream>
using namespace std;
int main(){
    int even=0;
    int odd=0;
    int arr[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        if(arr[i]%2==0){
            even++;
    
        } else {
            odd++;
        }
    }
    cout<<"even="<<even<<endl;
    cout<<"odd="<<odd<<endl;
    return 0;
}