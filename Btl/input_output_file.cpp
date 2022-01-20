#include "Person.cpp"
#include "Customer.cpp"
#include "Staff.cpp"
#include "Management system.cpp"
#include <conio.h>
#include <fstream>
#pragma once
using namespace std;
Management_system a;
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

