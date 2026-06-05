#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    Student(string n, int a)
    {
        name = n;
        age = a;
    }
};
int main()
{
    Student s1("kaushal", 20);
    cout << "this is name:" << s1.name << endl;
    cout << "this is age:" << s1.age << endl;
    return 0;
}