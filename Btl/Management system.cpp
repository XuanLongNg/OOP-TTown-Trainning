#include "Customer.cpp"
#include "Staff.cpp"
#include "Drinks.cpp"
#include "Topping.cpp"
#include "Account.cpp"
#pragma once
class Management_system:public Customer,public Staff{
    private:
    vector<Customer> customers;
    vector<Staff> staffs;
    vector<Drinks> drinks;
    vector<Topping> toppings;
    vector<Email> emails;
    public:
    // contructor,destructor,setter,getter
    Management_system(){}
    Management_system(std::vector<Customer> customers,std::vector<Staff>staffs,std::vector<Drinks>drinks,std::vector<Topping>toppings,std::vector<Email> emails):customers(customers),staffs(staffs),drinks(drinks),toppings(toppings),emails(emails){}
    void Add_customer(Customer a){ customers.push_back(a);}
    void Add_staff(Staff a){ staffs.push_back(a);}
    void Add_drink(Drinks a){ drinks.push_back(a);}
    void Add_topping(Topping a){ toppings.push_back(a);}
    void Add_email(Email a){ emails.push_back(a);}
    vector<Customer> Get_Customers(){ return customers;}
    vector<Staff> Get_Staffs(){ return staffs;}
    vector<Drinks> Get_Drinks(){ return drinks;}
    vector<Topping> Get_Topping(){ return toppings;}
    vector<Email> Get_Email(){ return emails;}
    //in out
    void input();
    void output();
    void inputCus();
    void inputSta();
    void inputDri();
    void inputTop();
    void inputEmail();
    void outputCus();
    void outputSta();
    void outputDri();
    void outputTop();
    void outputEmail();
    // ham khac
    int Find_drink(string k);
    int Find_topping(string k);
    bool Find_cus(string k);
    bool Find_sta(string k);
    bool Find_email(Email k);
    Customer Find_the_customer_max_points();
    vector<Customer> Top10_customers();
    vector<Staff> Find_Position(string k);
};
// Ham khac
bool Management_system::Find_email(Email k){
    For(i,0,emails.size()){
		if(k.Get_Email()==emails[i].Get_Email()&&k.Get_Pass()==emails[i].Get_Pass()){
            return 1;
        }
	}
    return 0;
}
bool Management_system::Find_cus(string k){
    For(i,0,customers.size()){
		if(customers[i].Get_Email()==k){
            return 1;
        }
	}
    return 0;
}
bool Management_system::Find_sta(string k){
    For(i,0,staffs.size()){
		if(staffs[i].Get_Email()==k){
            return 1;
        }
	}
    return 0;
}
int Management_system::Find_drink(string k){
    For(i,0,drinks.size()){
        if(drinks[i].Get_Drink()==k){
            return drinks[i].Get_Price();
            break;
        }
    }
    return 0;
}
int Management_system::Find_topping(string k){
    For(i,0,toppings.size()){
        if(toppings[i].Get_Topping()==k){
            return toppings[i].Get_Price();
            break;
        }
    }
    return 0;
}
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
// In out
void Management_system::inputCus(){
    int n;
    cout<<"Nhap so luong khac hang: "<<endl;
    cin>>n;
    For(i,0,n){
        Customer k;
        k.input();
        customers.push_back(k);
    }
}
void Management_system::inputSta(){
    int m;
    cout<<"Nhap so luong nhan vien: "<<endl;
    cin>>m;
    For(i,0,m){
        Staff k;
        k.input();
        staffs.push_back(k);
    }
}
void Management_system::inputDri(){
    int k;
    cout<<"Nhap so luong do uong: "<<endl;
    cin>>k;
    For(i,0,k){
        Drinks h;
        h.input();
        drinks.push_back(h);
    }
}
void Management_system::inputTop(){
    int k;
    cout<<"Nhap so luong topping: "<<endl;
    cin>>k;
    For(i,0,k){
        Topping h;
        h.input();
        toppings.push_back(h);
    }
}
void Management_system::inputEmail(){
    int k;
    cout<<"Nhap so luong email: "<<endl;
    cin>>k;
    For(i,0,k){
        Email h;
        h.input();
        emails.push_back(h);
    }
}
void Management_system::input(){
    inputCus();
    inputSta();
    inputDri();
    inputTop();
}
void Management_system::outputCus(){
    cout<<"Danh sach so luong hang hang"<<endl;
    For(i,0,customers.size()){
        cout<<"Khach hang thu "<<i+1<<":"<<endl;
        customers[i].output();
        cout<<endl;
    }
}
void Management_system::outputSta(){
    cout<<"Danh sach so luong nhan vien"<<endl;
    For(i,0,staffs.size()){
        cout<<"Nhan vien thu "<<i+1<<":"<<endl;
        staffs[i].output();
        cout<<endl;
    }
}
void Management_system::outputDri(){
    cout<<"Danh sach do uong hien co"<<endl;
    For(i,0,drinks.size()){
        cout<<"Do uong thu "<<i+1<<":"<<endl;
        drinks[i].output();
    }
}
void Management_system::outputTop(){
    cout<<"Danh sach topping hien co"<<endl;
    For(i,0,toppings.size()){
        cout<<"Topping thu "<<i+1<<":"<<endl;
        toppings[i].output();
    }
}
void Management_system::outputEmail(){
    cout<<"Danh sach tai khoan email da dang ki"<<endl;
    For(i,0,emails.size()){
        cout<<"Tai khoan thu "<<i+1<<":"<<endl;
        emails[i].output();
    }
}
void Management_system::output(){
    outputCus();
    outputSta();
    outputDri();
    outputTop();
}














