#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int cot=0;
    char a;
    cout<<"enter string:";
    cin>>str;
    cout<<"enter character:";
    cin>>a;
    for(int i=0;i<str.length();i++){
        if(str[i]==a){
            cot++;
            
        }
    }
    cout<<"count:"<<cot;
    return 0;
}