#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
     Student(){
        cout<<"constructor invoked"<<endl  ;


     }
};

int main(){
    Student s1;
    cout<<"enter name:";
    cin>>s1.name;
    cout<<s1.name;
    return 0;
}