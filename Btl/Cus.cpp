#include "Person.cpp"
#include "Customer.cpp"
#include "Staff.cpp"
#include "Account.cpp"
#include "Drinks.cpp"
#include "Topping.cpp"
#include "Management system.cpp"
#include "input_output_file.cpp"
#include <conio.h>
Customer b;
void Mua_do_uong(int &totalPrice){
	int x=1;
	while(x==1){
		string h;
		cout<<"Nhap ten do uong: ";
		scanf("\n");
		getline(cin,h);
		int k=a.Find_drink("h");
		cout<<endl;
		while(k==0){
			cout<<"Hien chung toi khong co san pham nay, vui long nhap lai."<<endl;
			cout<<"Nhap ten do uong: ";
			scanf("\n");
			getline(cin,h);
			k=a.Find_drink("h");
			cout<<endl;
		}
		totalPrice+=k;
		cout<<"Quy khach co muon mua tiep khong, vui long nhan 1 neu co,con khong thi nhan 0"<<endl;
		cin>>k;
		x=k;
	}
	cout<<"He thong se chuyen ve bang dich vu trong giay lat"<<endl;	
}
void Mua_Topping(int &totalPrice){
	int x=1;
	while(x==1){
		string h;
		cout<<"Nhap ten topping: ";
		scanf("\n");
		getline(cin,h);
		int k=a.Find_topping("h");
		cout<<endl;
		while(k==0){
			cout<<"Hien chung toi khong co san pham nay, vui long nhap lai."<<endl;
			cout<<"Nhap ten topping: ";
			scanf("\n");
			getline(cin,h);
			k=a.Find_topping("h");;
			cout<<endl;
		}
		totalPrice+=k;
		cout<<"Quy khach co muon mua tiep khong, vui long nhan 1 neu co,con khong thi nhan 0"<<endl;
		cin>>k;
		x=k;
	}
	cout<<"He thong se chuyen ve bang dich vu trong giay lat"<<endl;
}
void Xem_thong_tin_ca_nhan(){
	b.output();
}
void Check(){
	cout<<"Diem tich luy cua ban la: ";
	cout<<b.Get_Accumulated_points()<<endl;
}
void su_dung(int &totalPrice){
	int h;
	cout<<"Nhap so diem ban muon su dung( quy uoc 1 diem = 1000 VND): ";
	cin>>h;
	while(h>b.Get_Accumulated_points()){
		cout<<"So diem tich luy, vui long nhap lai hoac nhap -1 de quay lai bang dich vu"<<endl;
		cin>>h;
		if(h==-1) break;
	}
	if(h!=-1){
		cout<<"Doi diem thanh cong, he thong se chuyen ve bang dich vu trong giay lat"<<endl;
		totalPrice-=h;
	}
}
void Dich_Vu_Cus(){
	int totalPrice=0;
	string line(62,'_'),line1(60,'_'),line2(26,' '),line3(15,' '),line4(10,' '),line5(5,' '),line6(35,' ');
	cout<<line<<endl;
	cout<<"|"<<line2<<"Dich vu"<<line2<<" |"<<endl;
	cout<<"|"<<line1<<"|"<<endl;
	cout<<"|"<<line5<<"1. Mua do uong"<<line2<<line3<<"|"<<endl;
	cout<<"|"<<line5<<"2. Mua topping"<<line2<<line3<<"|"<<endl;
	cout<<"|"<<line5<<"3. Xem thong tin ca nhan"<<line2<<line5<<"|"<<endl;
	cout<<"|"<<line5<<"4. Kiem tra diem tich luy"<<line3<<line4<<line5<<"|"<<endl;
	cout<<"|"<<line5<<"5. Xem bang gia do uong "<<line2<<line5<<"|"<<endl;
	cout<<"|"<<line5<<"6. Xem bang gia topping "<<line2<<line5<<"|"<<endl;
	cout<<"|"<<line5<<"7. Su dung diem tich luy"<<line2<<line5<<"|"<<endl;
	cout<<"|"<<line1<<"|"<<endl;
	int h=1; 
	while(h){
		cout<<"Nhap lua chon cua ban: ";
		cin>>h;
		switch(h){
			case 1:
				Mua_do_uong(totalPrice);
				break;
			case 2:
				Mua_Topping(totalPrice);
				break;
			case 3:
				Xem_thong_tin_ca_nhan();
				break;
			case 4:
				Check();
				break;
			case 5:
				xem_gia_dri();
				break;
			case 6:
				xem_gia_top();
				break;
			case 7:
				su_dung(totalPrice);
				break;
			default:
				cout<<"Vui long nhap lai"<<endl;
				break;
		}
		Go();
  	}
  	cout<<"Tong don gia: "<<totalPrice<<endl;
  	a.Set_Accumulated_points(totalPrice);
	cout<<"Done!"<<endl;
}
