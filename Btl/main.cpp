#include "Person.cpp"
#include "Customer.cpp"
#include "Staff.cpp"
/*
int main(){
    Person a("Nguyen Xuan Long","19/11/2002","Van Ha-Dong Anh-Ha Noi","ngxuanlong2k2@gmail.com"),b;
    cin>>b;
    cout<<a<<b;
}
*/
/*
int main(){
    Customer a("Nguyen Xuan Long","19/11/2002","Van Ha-Dong Anh-Ha Noi","ngxuanlong2k2@gmail.com",100),b;
    vector<Customer> customers;
    int n; cin>>n;
    Customer k;
    For(i,0,n){
        k.input();
        k.Set_Accumulated_points(i);
        customers.push_back(k);
    }
    cout<<"------------------Top 10-----------------\n";
    customers=Customer::Top10_customers(customers);
    For(i,0,n){
        cout<<"Top "<<i+1<<":"<<endl;
        customers[i].output();
    }
    
}
*/
int main(){
    Staff a("Nguyen Xuan Long","19/11/2002","Van Ha-Dong Anh-Ha Noi","ngxuanlong2k2@gmail.com",1000000,10,3*20000*30,10000000,"Nhan Vien","12/1/2020"),b;
    a.output();
    b.output();
}

