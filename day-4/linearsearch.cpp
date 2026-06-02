#include<iostream>
using namespace std;
int main()
{
    int arr[5]={50,66,77,88,90};
    int key;
    bool isFound = false;
    cout<<"Enter the key to search:"<<endl;
    cin>>key;
    for(int i=0;i<5;i++){
        if(arr[i]==key)
        {
            isFound = true;
        }
       
    }
      if(isFound){
        cout<<"key is found"<<endl;
      }else{
        cout<<"key is not found "<<endl;
      }
    return 0;
}