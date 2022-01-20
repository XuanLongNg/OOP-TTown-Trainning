#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include "Account.cpp"
#pragma once
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Person:public Email{
    private:
    string name;
    string date_of_birth;
    string address;
    public:
    Person();
    Person(string name,string date_of_birth,string address,string email);
    ~Person(){}
    void Set_Name(string name){ this->name=name;}
    void Set_Dob(string date_of_birth){ this->date_of_birth=date_of_birth;}
    void Set_Address(string address){ this->address=address;}
    string Get_Name(){ return name;}
    string Get_Dob(){ return date_of_birth;}
    string Get_Address(){ return address;}
    void input();
    void output();
};
Person::Person(){
    name="Unknown";
    date_of_birth="Unknown";
    address="Unknown";
}
Person::Person(string name,string date_of_birth,string address,string email):Email(email){
    this->name=name;
    this->date_of_birth=date_of_birth;
    this->address=address;
}
void Person::input(){
    cout<<"Enter name: ";
    scanf("\n");
    getline(cin,name);
    cout<<"Enter birthday: ";
    scanf("\n");
    getline(cin,date_of_birth);
    cout<<"Enter address: ";
    scanf("\n");
    getline(cin,address);
}
void Person::output(){
    Email::output();
    cout<<"Name: "<<name<<endl;
    cout<<"Date of birth: "<<date_of_birth<<endl;
    cout<<"Address: "<<address<<endl;
}
