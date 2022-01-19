#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#pragma once
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Person{
    private:
    string name;
    string date_of_birth;
    string address;
    string email;
    public:
    Person();
    Person(string name,string date_of_birth,string address,string email);
    ~Person(){}
    void Set_Name(string name){ this->name=name;}
    void Set_Dob(string date_of_birth){ this->date_of_birth=date_of_birth;}
    void Set_Address(string address){ this->address=address;}
    void Set_Email(string email){ this->email=email;}
    string Get_Name(){ return name;}
    string Get_Dob(){ return date_of_birth;}
    string Get_Address(){ return address;}
    string Get_Email(){ return email;}
    void input();
    void output();
};
Person::Person(){
    name="Unknown";
    date_of_birth="Unknown";
    address="Unknown";
    email="Unknown";
}
Person::Person(string name,string date_of_birth,string address,string email){
    this->name=name;
    this->date_of_birth=date_of_birth;
    this->address=address;
    this->email=email;
}
void Person::input(){
    cout<<"Enter your name: ";
    scanf("\n");
    getline(cin,name);
    cout<<"Enter your birthday: ";
    scanf("\n");
    getline(cin,date_of_birth);
    cout<<"Enter your address: ";
    scanf("\n");
    getline(cin,address);
    cout<<"Enter your email: ";
    scanf("\n");
    getline(cin,email);
}
void Person::output(){
    cout<<"Name: "<<Get_Name()<<endl;
    cout<<"Date of birth: "<<Get_Dob()<<endl;
    cout<<"Address: "<<Get_Address()<<endl;
    cout<<"Email: "<<Get_Email()<<endl;
}