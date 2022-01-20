#include <iostream>
#pragma once
using namespace std;
class Topping{
    private:
    string topping;
    int price;
    public:
    Topping():topping("Unknown"),price(0){}
    Topping(string topping,int price):topping(topping),price(price){}
    ~Topping(){}
    void Set_Topping(string topping){ this->topping=topping;}
    void Set_Price(int price){ this->price=price;}
    string Get_Topping(){ return topping;}
    int Get_Price(){ return price;}
    void input();
    void output();
};
void Topping::input(){
    cout<<"Enter topping: ";
    scanf("\n");
    getline(cin,topping);
    cout<<"Enter price: ";
    cin>>price;
}
void Topping::output(){
    cout<<"Topping: "<<topping<<endl;
    cout<<"Price: "<<price<<endl;
}