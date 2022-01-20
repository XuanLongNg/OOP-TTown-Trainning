#include "Person.cpp"
#include "Customer.cpp"
#include "Staff.cpp"
#include "Management system.cpp"
Management_system a;
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
/*
int main(){
    Staff a("Nguyen Xuan Long","19/11/2002","Van Ha-Dong Anh-Ha Noi","ngxuanlong2k2@gmail.com","Nhan vien pha che"),b;
    a.output();
    b.input();
    b.output();
}
*/
void Them_khach_hang(){
	Customer x;
	x.input();
	a.Add_customer(x);
}
void Them_nhan_vien(){
	Staff x;
	x.input();
	a.Add_staff(x);
}
void Xem_thong_tin_all_Cus(){
	a.outputCus();
}
void Xem_thong_tin_all_Sta(){
	a.outputSta();
}
void FindPosition(){
	cout<<"Chuc vu ban muon tim: ";
	string h;
	scanf("\n");
	getline(cin,h);
	vector<Staff> k;
	k=a.Find_Position(h);
	For(i,0,k.size()){
		cout<<"Nhan vien thu "<<i+1<<":"<<endl;
		k[i].output();
	}
}
void dichvu(){
	string line(62,'_'),line1(60,'_'),line2(26,' '),line3(15,' '),line4(10,' '),line5(5,' '),line6(35,' ');
	cout<<line<<endl;
	cout<<"|"<<line2<<"Dich vu"<<line2<<" |"<<endl;
	cout<<"|"<<line1<<"|"<<endl;
	cout<<"|"<<line5<<"1. Them khach hang  "<<line6<<"|"<<endl;
	cout<<"|"<<line5<<"2. Them nhan vien   "<<line6<<"|"<<endl;
	cout<<"|"<<line5<<"3. Xem thong tin toan bo khach hang"<<line3<<line5<<"|"<<endl;
	cout<<"|"<<line5<<"4. Xem thong tin toan bo nhan vien "<<line3<<line5<<"|"<<endl;
	cout<<"|"<<line5<<"5. Xem thong tin nhan vien theo chuc vu "<<line3<<"|"<<endl;
	cout<<"|"<<line5<<"6. Khach hang co diem tich luy cao nhat "<<line3<<"|"<<endl;
	cout<<"|"<<line5<<"7. Top 10 khach hang co diem tich luy cao nhat    "<<line5<<"|"<<endl;
	cout<<"|"<<line1<<"|"<<endl;
	cout<<"Nhap lua chon cua ban: ";
	int h; cin>>h;
	switch(h){
		case 1:
			Them_khach_hang();
			break;
		case 2:
			Them_nhan_vien();
			break;
		case 3:
			Xem_thong_tin_all_Cus();
		case 4:
			Xem_thong_tin_all_Sta();
		case 5:
			FindPosition();
	}
	cout<<"Done!"<<endl;
}
int main(){
	dichvu();
}