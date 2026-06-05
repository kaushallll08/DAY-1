#include<iostream>
using namespace std;
class Students{
    public:
    string name;
    int age;
    string email;

};
 

int main(){
    Students s1;
    s1.name="Kaushal";
    s1.age=20;
    s1.email="kaushal@gmail.com";
    cout<<s1.name<<endl<<s1.age<<endl<<s1.email;
    return 0;

} 