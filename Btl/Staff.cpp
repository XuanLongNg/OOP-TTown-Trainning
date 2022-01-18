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
    void set
}