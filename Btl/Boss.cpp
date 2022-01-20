#include "Customer.cpp"
#include "Staff.cpp"
#include "Account.cpp"
#include "Drinks.cpp"
#include "Topping.cpp"
#include "Management system.cpp"
#include "input_output_file.cpp"
#include <conio.h>
void Them_khach_hang(){
	Email k;
	k.input();
	a.Add_email(k);
	Customer h;
	h.input();
	a.Add_customer(h);
}
void Them_nhan_vien(){
	Email k;
	k.input();
	a.Add_email(k);
	Staff x;
	x.input();
	a.Add_staff(x);
}
void Them_do_uong(){
	Drinks x;
	x.input();
	a.Add_drink(x);
}
void Them_topping(){
	Topping x;
	x.input();
	a.Add_topping(x);
}
void Xem_thong_tin_all_Cus(){
	a.outputCus();
}
void Xem_thong_tin_all_Sta(){
	a.outputSta();
}
void xem_gia_dri(){
	a.outputDri();
}
void xem_gia_top(){
	a.outputTop();
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
void Xem_ds_email(){
	a.outputEmail();
}
void Dich_Vu_Boss(){
	string line(62,'_'),line1(60,'_'),line2(26,' '),line3(15,' '),line4(10,' '),line5(5,' '),line6(35,' ');
	cout<<line<<endl;
	cout<<"|"<<line2<<"Dich vu"<<line2<<" |"<<endl;
	cout<<"|"<<line1<<"|"<<endl;
	cout<<"|"<<line5<<"1. Them khach hang  "<<line6<<"|"<<endl;
	cout<<"|"<<line5<<"2. Them nhan vien   "<<line6<<"|"<<endl;
	cout<<"|"<<line5<<"3. Them do uong	  "<<line6<<"|"<<endl;
	cout<<"|"<<line5<<"4. Them topping	  "<<line6<<"|"<<endl;
	cout<<"|"<<line5<<"5. Xem thong tin toan bo khach hang"<<line3+line5<<"|"<<endl;
	cout<<"|"<<line5<<"6. Xem thong tin toan bo nhan vien "<<line3+line5<<"|"<<endl;
	cout<<"|"<<line5<<"7. Xem bang gia do uong "<<line2+line5<<"|"<<endl;
	cout<<"|"<<line5<<"8. Xem bang gia topping "<<line2+line5<<"|"<<endl;
	cout<<"|"<<line5<<"9. Xem thong tin nhan vien theo chuc vu "<<line3<<"|"<<endl;
	cout<<"|"<<line5<<"10. Khach hang co diem tich luy cao nhat"<<line3<<"|"<<endl;
	cout<<"|"<<line5<<"11. Top 10 khach hang co diem tich luy cao nhat   "<<line5<<"|"<<endl;
	cout<<"|"<<line5<<"12. Danh sach email da dang ki"<<line3+line4<<"|"<<endl;
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
				Them_do_uong();
				break;
			case 4:
				Them_topping();
				break;
			case 5:
				Xem_thong_tin_all_Cus();
				break;
			case 6:
				Xem_thong_tin_all_Sta();
				break;
			case 7:
				xem_gia_dri();
				break;
			case 8:
				xem_gia_top();
				break;
			case 9:
				FindPosition();
				break;
			case 10:
				Find_max();
				break;
			case 11:
				Find_Top10();
				break;
			case 12:
				Xem_ds_email();
				break;
			default:
				cout<<"Vui long nhap lai"<<endl;
				break;
		}
    	GhiFile();
		Go();
  	}
	cout<<"Done!"<<endl;
}
