#include "Person.cpp"
#include <vector>
class Customer:public Person{
    private:
    int Accumulated_points;
    public:
    Customer():Person(),Accumulated_points(0){}
    Customer(string name,string date_of_birth,string address,string email,int Accumulated_points=0):Person(name,date_of_birth,address,email),Accumulated_points(Accumulated_points){}
    void Set_Accumulated_points(int Accumulated_points){ this->Accumulated_points=Accumulated_points;}
    int Get_Accumulated_points(){ return Accumulated_points;}
    void input();
    void output();
};
void Customer::input(){
    Person::input();
}
void Customer::output(){
    Person::output();
    cout<<"Accumulated points: "<<Accumulated_points<<endl;
}