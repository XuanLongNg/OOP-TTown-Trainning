#include "Person.cpp"
#pragma once
class Staff:public Person{
    private:
    string Position;
    int Basic_salary;
    int Hourly_overtime_salary;
    int Total_salary;
    public:
    Staff();
    Staff(string name,string date_of_birth,string address,string email,string Position);
    void Set_Position(string Position){ this->Position=Position;}
    void Set_Basic_salary();
    void Set_Hourly_overtime_salary();
    void Set_Total_salary(){ this->Total_salary=Basic_salary+Hourly_overtime_salary;}
    string Get_Position(){ return Position;}
    int Get_Basic_salary(){ return Basic_salary;}
    int Get_Hourly_overtime_salary(){ return Hourly_overtime_salary;}
    int Get_Total_salary(){ return Total_salary;}
    void input();
    void output();
};
Staff::Staff(){
    Person();
    Position="Unknown";
    Basic_salary=0;
    Hourly_overtime_salary=0;
    Total_salary=0;
}
Staff::Staff(string name,string date_of_birth,string address,string email,string Position):Person(name,date_of_birth,address,email){  
    this->Position=Position;
    this->Basic_salary=Basic_salary;
    this->Hourly_overtime_salary=Hourly_overtime_salary;
    this->Total_salary=Total_salary;
    Set_Basic_salary();
    Set_Hourly_overtime_salary();
    Set_Total_salary();
}
void Staff::input(){
    Person::input();
    cout<<"Position: ";
    scanf("\n");
    getline(cin,Position);
    while(Position!="Nhan vien pha che"&&Position!="Nhan vien ban hang"&&Position!="Nhan vien phuc vu"&&Position!="Quan ly"&&Position!="Nhan vien ke toan"&&Position!="Chu dau tu"){
        cout<<"Vui long nhap lai"<<endl;
        cout<<"Position: ";
        scanf("\n");
        getline(cin,Position);
    }
    Set_Hourly_overtime_salary();
    Set_Basic_salary();
    Set_Total_salary();
}
void Staff::output(){
    Person::output();
    cout<<"Position: "<<Position<<endl;
    cout<<"Total salary: "<<Total_salary<<endl;
}
void Staff::Set_Basic_salary(){
    int h=0;
    if(Position=="Nhan vien pha che") h=35000;
    else if(Position=="Nhan vien ban hang") h=30000;
    else if(Position=="Nhan vien phuc vu") h=30000;
    else if(Position=="Quan ly") h=60000;
    else if(Position=="Nhan vien ke toan") h=50000;
    else if(Position=="Chu dau tu") h=100000;
    else{ 
        h=0;
    }
    this->Basic_salary=h;
}
void Staff::Set_Hourly_overtime_salary(){
    int h=0;
    if(Position=="Nhan vien pha che") h=Basic_salary*0.05;
    else if(Position=="Nhan vien ban hang") h=Basic_salary*0.05;
    else if(Position=="Nhan vien phuc vu") h=Basic_salary*0.05;
    else if(Position=="Quan ly") h=Basic_salary*0.06;
    else if(Position=="Nhan vien ke toan") h=Basic_salary*0.06;
    else if(Position=="Chu dau tu") h=0;
    this->Hourly_overtime_salary=h;
}