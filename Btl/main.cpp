#include "Person.cpp"
#include "Customer.cpp"
#include "Staff.cpp"
#include "Account.cpp"
#include "Drinks.cpp"
#include "Topping.cpp"
#include "Management system.cpp"
#include "input_output_file.cpp"
#include "Boss.cpp"
#include "Cus.cpp"
#include "Sta.cpp"
#include <conio.h>
void Dang_ki(){
	Email k;
	k.input();
	a.Add_email(k);
	Customer h;
	h.input();
	h.Set_Email(k.Get_Email());
	a.Add_customer(h);
    cout<<"Done!"<<endl;
}
void Dang_nhap(){
	Email h,f("iamboss@gmail.boss.com","12345678987654321");
	h.input();
    if(h.Get_Email()==f.Get_Email()&&h.Get_Pass()==f.Get_Pass()){
        Dich_Vu_Boss();
        return;
    }
    int k=a.Find_email(h);
	while(k!=1){
        cout<<"Tai khoan hoac mat khau khong chinh sac, vui long nhap lai"<<endl;
        h.input();
        k=a.Find_email(h);
    }
    k=a.Find_cus(h.Get_Email());
    if(k==1) Dich_Vu_Cus();
    else Dich_Vu_Sta();
}
void start(){
    string line(30,' '),line2(17,'_'),line3(2,' '),line4(15,' '),line5(15,'_');
	cout<<line<<"	 WELL COME"<<endl;
    cout<<line<<line2<<endl;
    cout<<line<<"|"<<line4<<"|"<<endl;
    cout<<line<<"|"<<line3<<"1.Dang nhap"<<line3<<"|"<<endl;
    cout<<line<<"|"<<line5<<"|"<<endl;
    cout<<line<<"|"<<line4<<"|"<<endl;
    cout<<line<<"|"<<line3<<"2.Dang ki  "<<line3<<"|"<<endl;
    cout<<line<<"|"<<line5<<"|"<<endl;
    cout<<line<<"Nhap lua chon: "<<endl;
    int h; cin>>h;
    while(h!=1&&h!=2){
    	cout<<line<<"Vui long nhap lai"<<endl;
    	cout<<line<<"Nhap lua chon: "<<endl;
    	cin>>h;
	}
	if(h==1){
		Dang_nhap();
	}else Dang_ki();
}
int main(){
	DocFile();
    start();
    GhiFile();
}
