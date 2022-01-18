#include "Person.cpp"
class Staff:public Person{
    private:
    int Basic_salary;
    int Revenue_salary;
    int Hourly_overtime_salary;
    int Total_salary;
    string Position;
    string Join_date;
    public:
    Staff();
    Staff(string name,string date_of_birth,string address,string email,int Basic_salary,int Revenue_salary,int Hourly_overtime_salary,int Total_salary,string Position,string Join_date);
    ~Staff(){}
    void Set_Basic_salary(int Basic_salary){ this->Basic_salary=Basic_salary;}
    void Set_Revenue_salary(int Revenue_salary){ this->Revenue_salary=Revenue_salary;}
    void Set_Hourly_overtime_salary(int Hourly_overtime_salary){ this->Hourly_overtime_salary=Hourly_overtime_salary;}
    void Set_Total_salary(int Total_salary){ this->Total_salary=Total_salary;}
    void Set_Position(string Position){ this->Position=Position;}
    void Set_Join_date(string Join_date){ this->Join_date=Join_date;}
    int Set_Basic_salary(){ return Basic_salary;}
    int Set_Revenue_salary(){ return Revenue_salary;}
    int Set_Hourly_overtime_salary(){ return Hourly_overtime_salary;}
    int Set_Total_salary(){ return Total_salary;}
    string Set_Position(){ return Position;}
    string Set_Join_date(){ return Join_date;}
};
Staff::Staff(){
    Basic_salary=0;
    Revenue_salary=0;
    Hourly_overtime_salary=0;
    Total_salary=0;
    Position="Unknown";
    Join_date="Unknown";
}
Staff::Staff(string name,string date_of_birth,string address,string email,int Basic_salary,int Revenue_salary,int Hourly_overtime_salary,int Total_salary,string Position,string Join_date){
    Person(name,date_of_birth,address,email);
    this->Basic_salary=Basic_salary;
    this->Revenue_salary=Revenue_salary;
    this->Hourly_overtime_salary=Hourly_overtime_salary;
    this->Total_salary=Total_salary;
    this->Position=Position;
    this->Join_date=Join_date;
}