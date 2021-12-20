#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Student{
    public:
    int id;
    string name;
    int mark;
    public:
    Student(){
        id=0;
        name="";
        mark=0;
    }
    Student(int i,string n,int m){
        id=i;
        name=n;
        mark=m;
    }
    void S_in(){
        cin>>id; cin.ignore();
        getline(cin,name);
        cin>>mark;
    }
    void S_out(){
        cout<<"Student id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Mark: "<<mark<<endl;
    }
    
};
bool comp(Student a,Student b){
    return a.mark>b.mark;
}
void sort_by_mark(Student *p,int n){
    sort(p,p+n,comp);
}
int main(){
    Student a[100];
    int n; cin>>n;
    For(i,0,n) a[i].S_in();
    sort_by_mark(a,n);
    For(i,0,n) a[i].S_out();
}