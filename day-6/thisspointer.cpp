#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void show()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
    }
    void display()
    {
        cout << this;
    }
};
int main()
{
    Student s1("kaushal", 20);
    s1.show();
    s1.display();
    return 0;
}