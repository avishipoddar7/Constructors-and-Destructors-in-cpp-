#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year_old;
    double purchase_price;
    double expected_SP;
   
    Car();
    void display();
};
Car::Car(){
   
    cout<<"Enter brand of your car: ";
    cin>>brand;
    cout<<"Enter model: ";
    cin>>model;
    cout<<"Enter price you purchased the car for: ";
    cin>>purchase_price;
    cout<<"Enter expected price you want to sell for: ";
    cin>>expected_SP;
};
void Car::display(){
    cout<<"---Details---"<<endl;
    cout<<"Brand of the car: "<<brand<<endl<<"Model: "<<model<<endl<<"Price the care was purchased for: "<<purchase_price<<"Rs."<<endl<<"Expected price for selling: "<<expected_SP<<"Rs."<<endl;
};
int main(){
    Car c1;
    c1.display();
    return 0;
}