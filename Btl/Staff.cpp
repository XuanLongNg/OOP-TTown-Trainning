#include "Person.cpp"
class Staff:public Person{
    private:
    int Basic_salary;
    int Hourly_overtime_salary;
    int Total_salary;
    string Position;
    string Join_date;
    public:
    Staff();
    Staff(string name,string date_of_birth,string address,string email,int Basic_salary,int Revenue_salary,int Hourly_overtime_salary,int Total_salary,string Position,string Join_date);
    void Set_Basic_salary(int Basic_salary){ this->Basic_salary=Basic_salary;}
    void Set_Revenue_salary(int Revenue_salary){ this->Revenue_salary=Revenue_salary;}
    void Set_Hourly_overtime_salary(int Hour){ this->Hourly_overtime_salary=Hour*(Basic_salary+Basic_salary*0.05)}
    void Set_Total_salary(){ this->Total_salary=Basic_salary+Revenue_salary+Hourly_overtime_salary;}
    void Set_Position(string Position){ this->Position=Position;}
    void Set_Join_date(string Join_date){ this->Join_date=Join_date;}
    int Get_Basic_salary(){ return Basic_salary;}
    int Get_Revenue_salary(){ return Revenue_salary;}
    int Get_Hourly_overtime_salary(){ return Hourly_overtime_salary;}
    int Get_Total_salary(){ return Total_salary;}
    string Get_Position(){ return Position;}
    string Get_Join_date(){ return Join_date;}
    void input();
    void output();
};
Staff::Staff(){
    Person();
    Basic_salary=0;
    Revenue_salary=0;
    Hourly_overtime_salary=0;
    Total_salary=0;
    Position="Unknown";
    Join_date="Unknown";
}
Staff::Staff(string name,string date_of_birth,string address,string email,int Basic_salary,int Revenue_salary,int Hourly_overtime_salary,int Total_salary,string Position,string Join_date):Person(name,date_of_birth,address,email){  
    this->Basic_salary=Basic_salary;
    this->Revenue_salary=Revenue_salary;
    this->Hourly_overtime_salary=Hourly_overtime_salary;
    this->Total_salary=Total_salary;
    this->Position=Position;
    this->Join_date=Join_date;
}
void Staff::input(){
    Person::input();
    cout<<"Enter basic salary: "<<endl;
    cin>>Basic_salary;
    cout<<"Enter revenue salary: "<<endl;
    cin>>Revenue_salary;
    cout<<"Enter hourly overtime salary: "<<endl;
    cin>>Hourly_overtime_salary;
    cout<<"Total salary: "<<Get_Total_salary<<endl;
    cout<<"Position: ";
    scanf("\n");
    getline(cin,Position);
    cout<<"Join_date: ";
    scanf("\n");
    getline(cin,Join_date); 
}
void Staff::output(){
    Person::output();
    cout<<"Basic salary: "<<Basic_salary<<endl;
    cout<<"Revenue salary: "<<Revenue_salary<<endl;
    cout<<"Hourly overtime salary: "<<Hourly_overtime_salary<<endl;
    cout<<"Total_salary: "<<Total_salary<<endl;
    cout<<"Position: "<<Position<<endl;
    cout<<"Join date: "<<Join_date<<endl;
}