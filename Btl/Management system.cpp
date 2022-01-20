#include "Customer.cpp"
#include "Staff.cpp"
class Management_system:public Customer,public Staff{
    private:
    vector<Customer> customers;
    vector<Staff> staffs;
    public:
    Management_system(){}
    Management_system(std::vector<Customer> customers,std::vector<Staff>staffs):customers(customers),staffs(staffs){}
    void Add_customer(Customer a){ customers.push_back(a);}
    void Add_staff(Staff a){ staffs.push_back(a);}
    vector<Customer> Get_Customers(){ return customers;}
    vector<Staff> Get_Staffs(){ return staffs;}
    Customer Find_the_customer_max_points();
    vector<Customer> Top10_customers();
    vector<Staff> Find_Position(string k);
};
bool sort_by_point(Customer a,Customer b){ return a.Get_Accumulated_points()>b.Get_Accumulated_points();}
Customer Management_system::Find_the_customer_max_points(){
    Customer max=customers[0];
    For(i,0,customers.size()){
        if(customers[i].Get_Accumulated_points()>max.Get_Accumulated_points()) max=customers[i];
    }
    return max;
}
vector<Customer> Management_system::Top10_customers(){
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
vector<Staff> Management_system::Find_Position(string k){
    vector<Staff> h;
    For(i,0,staffs.size()){
        if(staffs[i].Get_Position()==k)
        h.push_back(staffs[i]);
    }
    return h;
}