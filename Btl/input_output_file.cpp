#include "Management system.cpp"
#include <conio.h>
#include <fstream>
#pragma once
using namespace std;
Management_system a;
void Go(){
	printf("\nPress ESC to end program or Press any key to continue...\n");
	char m;
	m=getch();
	if(m==27) exit(0);
}
int toInt(string k){
	int h=0;
	For(i,0,k.size()){
		h=h*10+k[i]-'0';
	}
	return h;
}
void DocCus(){
	Customer h;
	int f=0;
	ifstream input;
	input.open("Khach hang.txt",ios::in);
	while(!input.eof()){
		string k;
		getline(input,k);
		switch(f){
			case 0:
			h.Set_Name(k);
			break;
			case 1:
			h.Set_Dob(k);
			break;
			case 2:
			h.Set_Address(k);
			break;
			case 3:
			h.Set_Email(k);
			break;
			case 4:
			h.Set_Accumulated_points(toInt(k));
			f=-1;
			a.Add_customer(h);
			break;
		}	 
	    f++;	
	}
	input.close();
}
void DocSta(){
	Staff h;
	int f=0;
	ifstream input;
	input.open("Nhan Vien.txt",ios::in);
	while(!input.eof()){
		string k;
		getline(input,k);
		switch(f){
			case 0:
			h.Set_Name(k);
			break;
			case 1:
			h.Set_Dob(k);
			break;
			case 2:
			h.Set_Address(k);
			break;
			case 3:
			h.Set_Email(k);
			break;
			case 4:
			h.Set_Position(k);
			f=-1;
			a.Add_staff(h);
			break;
		}	 
	    f++;	
	}
	input.close();
}
void DocDri(){
	Drinks h;
	int f=0;
	ifstream input;
	input.open("Do uong.txt",ios::in);
	while(!input.eof()){
		string k;
		getline(input,k);
		switch(f){
			case 0:
			h.Set_Drink(k);
			break;
			case 1:
			h.Set_Price(toInt(k));
			f=-1;
			a.Add_drink(h);
			break;
		}	 
	    f++;	
	}
	input.close();
}
void DocTop(){
	Topping h;
	int f=0;
	ifstream input;
	input.open("Topping.txt",ios::in);
	while(!input.eof()){
		string k;
		getline(input,k);
		switch(f){
			case 0:
			h.Set_Topping(k);
			break;
			case 1:
			h.Set_Price(toInt(k));
			f=-1;
			a.Add_topping(h);
			break;
		}	 
	    f++;	
	}
	input.close();
}
void DocAcc(){
	Email h;
	int f=0;
	ifstream input;
	input.open("Account.txt",ios::in);
	while(!input.eof()){
		string k;
		getline(input,k);
		switch(f){
			case 0:
			h.Set_Email(k);
			break;
			case 1:
			h.Set_Pass(k);
			f=-1;
			a.Add_email(h);
			break;
		}	 
	    f++;	
	}
	input.close();
}
void GhiCus(){
	vector<Customer> h;
	ofstream output;
	output.open("Khach hang.txt",ios::out);
	h=a.Get_Customers();
	For(i,0,h.size()){
		output<<h[i].Get_Name()<<endl;
		output<<h[i].Get_Dob()<<endl;
		output<<h[i].Get_Address()<<endl;
		output<<h[i].Get_Email()<<endl;
		output<<h[i].Get_Accumulated_points()<<endl;
	}
	output.close();
}
void GhiSta(){
	vector<Staff> h;
	ofstream output;
	output.open("Nhan Vien.txt",ios::out);
	h=a.Get_Staffs();
	For(i,0,h.size()){
		output<<h[i].Get_Name()<<endl;
		output<<h[i].Get_Dob()<<endl;
		output<<h[i].Get_Address()<<endl;
		output<<h[i].Get_Email()<<endl;
		output<<h[i].Get_Position()<<endl;
	}
	output.close();
}
void GhiDri(){
	vector<Drinks> h;
	ofstream output;
	output.open("Do uong.txt",ios::out);
	h=a.Get_Drinks();
	For(i,0,h.size()){
		output<<h[i].Get_Drink()<<endl;
		output<<h[i].Get_Price()<<endl;
	}
	output.close();
}
void GhiTop(){
	vector<Topping> h;
	ofstream output;
	output.open("Topping.txt",ios::out);
	h=a.Get_Topping();
	For(i,0,h.size()){
		output<<h[i].Get_Topping()<<endl;
		output<<h[i].Get_Price()<<endl;
	}
	output.close();
}
void GhiAcc(){
	vector<Email> h;
	ofstream output;
	output.open("Account.txt",ios::out);
	h=a.Get_Email();
	For(i,0,h.size()){
		output<<h[i].Get_Email()<<endl;
		output<<h[i].Get_Pass()<<endl;
	}
	output.close();
}
void DocFile(){
	DocCus();
	DocSta();
	DocDri();
	DocTop();
	DocAcc();
}
void GhiFile(){
	GhiCus();
	GhiSta();
	GhiDri();
	GhiTop();
	GhiAcc();
}
