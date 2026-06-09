#include<iostream>
using namespace std;
class Car{
    private:
    void fuelCheck(){
        cout<<"Checking fuel"<<endl;
    }
    void batteryCheck(){
        cout<<"Battery checking"<<endl;
    }
    public:
    void start(){
        fuelCheck();
        batteryCheck();
        cout<<"car started"<<endl;
    }

};
int main(){
    Car c1;
    c1.start();
    return 0;
}