#include "Person.cpp"
#include "Customer.cpp"
#include "Staff.cpp"
#include "Management system.cpp"
#include "input_output_file.cpp"
#include <conio.h>
void Go(){
	printf("\nPress ESC to end program or Press any key to continue...\n");
	char m;
	m=getch();
	if(m==27) exit(0);
}
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
void Find_max(){
	Customer k;
	k=a.Find_the_customer_max_points();
	k.output();
}
void Find_Top10(){
	vector<Customer> k;
	k=a.Top10_customers();
	For(i,0,k.size()){
		cout<<"Khach hang thu "<<i+1<<":"<<endl;
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
	int h=1; 
	while(h){
		cout<<"Nhap lua chon cua ban: ";
		cin>>h;
		switch(h){
			case 1:
				Them_khach_hang();
				break;
			case 2:
				Them_nhan_vien();
				break;
			case 3:
				Xem_thong_tin_all_Cus();
				break;
			case 4:
				Xem_thong_tin_all_Sta();
				break;
			case 5:
				FindPosition();
				break;
			case 6:
				Find_max();
				break;
			case 7:
				Find_Top10();
				break;
			default:
				cout<<"Vui long nhap lai"<<endl;
				break;
		}
		GhiCus();
    	GhiSta();
		cout<<"Done!"<<endl;
		Go();
  	}
}
int main(){
    DocCus();
    DocSta();
    dichvu();
}
