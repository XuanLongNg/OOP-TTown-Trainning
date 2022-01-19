#include "Person.cpp"
class Staff:public Person{
    private:
    int Basic_salary;
    int Revenue_salary;
    int Hourly_overtime_salary;
    int Total_salary;
    string Position;
    string Join_date;
    static vector<Staff> staffs;
    public:
    Staff();
    Staff(string name,string date_of_birth,string address,string email,int Basic_salary,int Revenue_salary,int Hourly_overtime_salary,int Total_salary,string Position,string Join_date);
    void Set_Basic_salary(int Basic_salary){ this->Basic_salary=Basic_salary;}
    void Set_Revenue_salary(int Revenue_salary){ this->Revenue_salary=Revenue_salary;}
    void Set_Hourly_overtime_salary(int Hourly_overtime_salary){ this->Hourly_overtime_salary=Hourly_overtime_salary;}
    void Set_Total_salary(int Total_salary){ this->Total_salary=Total_salary;}
    void Set_Position(string Position){ this->Position=Position;}
    void Set_Join_date(string Join_date){ this->Join_date=Join_date;}
    int Get_Basic_salary(){ return Basic_salary;}
    int Get_Revenue_salary(){ return Revenue_salary;}
    int Get_Hourly_overtime_salary(){ return Hourly_overtime_salary;}
    int Get_Total_salary(){ return Total_salary;}
    string Get_Position(){ return Position;}
    string Get_Join_date(){ return Join_date;}
    vector<Staff> Get_Staffs(){ return staffs;}
    static void Add_member(Staff a);
    static vector<Staff> Find_Position(string k);
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
Staff::Staff(string name,string date_of_birth,string address,string email,int Basic_salary,int Revenue_salary,int Hourly_overtime_salary,int Total_salary,string Position,string Join_date){
    Person(name,date_of_birth,address,email);
    this->Basic_salary=Basic_salary;
    this->Revenue_salary=Revenue_salary;
    this->Hourly_overtime_salary=Hourly_overtime_salary;
    this->Total_salary=Total_salary;
    this->Position=Position;
    this->Join_date=Join_date;
}
void Staff::Add_member(Staff a){
    staffs.push_back(a);
}
vector<Staff> Staff::Find_Position(string k){
    vector<Staff> h;
    For(i,0,staffs.size()){
        if(staffs[i].Get_Position()==k)
        h.push_back(staffs[i]);
    }
    return h;
}
void Staff::output(){
    Person::output();
    cout<<"Basic salary: "<<Basic_salary<<endl;
    cout<<"Revenue salary: "<<Revenue_salary<<endl;
    cout<<"Hourly overtime salary: "<<Hourly_overtime_salary<<endl;
    cout<<"Total_salary: "<<Total_salary<<endl;
    cout<<"Position:  "<<Position<<endl;
    cout<<"Join date: "<<Join_date<<endl;
}