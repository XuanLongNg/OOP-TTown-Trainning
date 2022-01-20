#include "Person.cpp"
#include "Topping.cpp"
#include <vector>
#pragma once
class Customer:public Person{
    private:
    int accumulated_points;
    public:
    Customer():Person(),accumulated_points(0){}
    Customer(string name,string date_of_birth,string address,string email,int accumulated_points=0):Person(name,date_of_birth,address,email),accumulated_points(accumulated_points){}
    void Set_Accumulated_points(int k);
    int Get_Accumulated_points(){ return accumulated_points;}
    void input();
    void output();
};
void Customer::Set_Accumulated_points(int k){
    this->accumulated_points=this->accumulated_points+k*0.05;
}
void Customer::input(){
    Person::input();
}
void Customer::output(){
    Person::output();
    cout<<"Accumulated points: "<<accumulated_points<<endl;
}