#include <iostream>
using namespace std;
class Students
{
private:
    string name = "kaushal";
    int age=20;
    string email="ka@gmail.com";

public:
    void getData(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<email<<endl;
    }    
public:
    void setData(){
        name="tejas";
    }

};

int main()
{
    Students s1;
    s1.setData();
    s1.getData(); 
    return 0;
}