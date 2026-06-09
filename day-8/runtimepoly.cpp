#include<iostream>
using namespace std;

class Animal{

    public:
    void eat(){
        cout<<"eating..."<<endl;

    }
    void sound(){
        cout<<"sound..."<<endl;

    }
    


};
class Dog : public Animal{
    public:
    void sound(){
        cout<<"bowww bowww"<<endl;
    }
};
class Cat: public Animal{
    public:
    void sound(){
        cout<<"meow meow"<<endl;
    }
};
int main(){
     Dog d1;
     d1.sound();
     Cat c;
     c.sound();
       
    return 0;
} 