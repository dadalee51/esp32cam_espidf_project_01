#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Car{
    public:
        int oil;
        string name="Holden the car brand";
};

int main(){
    Car car;
    cout<<"Hello,"<<endl;
    cout<<car.name<<endl;
    return 0;
};