#include <iostream>
#pragma once
using namespace std;
class Email{
    private:
    string email;
    string pass;
    public:
    Email():email("Unknown"),pass("Unknown"){}
    Email(string email,string pass="0000"):email(email),pass(pass){}
    ~Email(){}
    void Set_Email(string email){ this->email=email;}
    void Set_Pass(string pass){ this->pass=pass;}
    string Get_Email(){ return email;}
    string Get_Pass(){ return pass;}
    void input();
    void output();
    void outAll();
};
void Email::input(){
    cout<<"Enter email: "<<endl;
    cin>>email;
    cout<<"Enter password: "<<endl;
    cin>>pass;
}
void Email::output(){
    cout<<"Email: "<<email<<endl;
}
void Email::outAll(){
    cout<<"Email: "<<email<<endl;
    cout<<"Pass:"<<pass<<endl;
}