#include <iostream>
#pragma once
using namespace std;
class Drinks{
    private:
    string drink;
    string topping;
    int price;
    public:
    Drinks():drink("Unknown"),price(0){}
    Drinks(string drink,int price):drink(drink),price(price){}
    ~Drinks(){}
    void Set_Drink(string drink){ this->drink=drink;}
    void Set_Price(int price){ this->price=price;}
    string Get_Drink(){ return drink;}
    int Get_Price(){ return price;}
    void input();
    void output();
};
void Drinks::input(){
    cout<<"Enter drink: ";
    scanf("\n");
    getline(cin,drink);
    cout<<"Enter price: ";
    cin>>price;
}
void Drinks::output(){
    cout<<"Drink: "<<drink<<endl;
    cout<<"Price: "<<price<<endl;
}