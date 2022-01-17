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
    static Customer Find_the_customer_max_points(vector<Customer> customers);
    static vector<Customer> Top10_customers(vector<Customer> customers);
    void input();
    void output();
};
bool sort_by_point(Customer a,Customer b){ return a.Get_Accumulated_points()>b.Get_Accumulated_points();}
Customer Customer::Find_the_customer_max_points(vector<Customer> customers){
    Customer max=customers[0];
    For(i,0,customers.size()){
        if(customers[i].Get_Accumulated_points()>max.Get_Accumulated_points()) max=customers[i];
    }
    return max;
}
vector<Customer> Customer::Top10_customers(vector<Customer> customers){
    vector<Customer> top10;
    For(i,0,customers.size()-1){
        For(j,i,customers.size()){
            if(customers[j].Get_Accumulated_points()>customers[i].Get_Accumulated_points())
            swap(customers[i],customers[j]);
        }
    }
    int k=10;
    if(customers.size()<10) k=customers.size();
    For(i,0,k){
        top10.push_back(customers[i]);
    }
    return top10;
}
void Customer::input(){
    Person::input();
}
void Customer::output(){
    Person::output();
    cout<<"Accumulated points: "<<Accumulated_points<<endl;
}