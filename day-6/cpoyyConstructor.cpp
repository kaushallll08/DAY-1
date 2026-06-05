#include <iostream>
using namespace std;
class Student
{
public:
    string name="kaushal";
    int age=20;
    
    void show()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
    }
    // void display()
    // {
    //     cout << this;
    // }
};
int main()
{
    Student s1;
    // s1.show();
    // s1.display();
    Student s2(s1);
    s2.show();
    return 0;
}