#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Person{
    private:
        string name;
        string date_of_birth;
        string address;
    public:
        Person();
        Person(string n,string d,string ad);
        ~Person(){}
        string getname(){ return name;}
        string getdate_of_birth(){ return date_of_birth;}
        string getaddress(){ return address;}
        void getInformation();
        void Display();
};
class Hobbies:public Person{
    private:
    string hobbies;
    public:
        Hobbies();
        Hobbies(string c);
        ~Hobbies(){}
        string get_hobbies(){ return hobbies;}
        void getHobbies();
        void DisplayH(); 
};
void Display_list_by_hobbies(Hobbies *list,int n,string k);
class Generation:public Person{
    private:
        string gen;
    public:
        Generation();
        Generation(string g);
        ~Generation(){}
        void getGen();
        string get_gen(){ return gen;}
        void DisplayG();
        
};
void Display_list_by_Gen(Generation *list,int n,int k);
int getYear(string date){
    int k=0;
    For(i,6,date.size()) k=k*10+date[i]-'0';
    return k;
}
string generation(int k){
    string gen;
    if(1925<=k&&k<1945) gen="Silent Generation";
    else if(1945<=k&&k<1965) gen="Baby Boomers";
    else if(1965<=k&&k<=1979) gen="Generation X";
    else if(1980<=k&&k<1998) gen="Millennials or Generation Y";
    else if(1998<=k&&k<=2009) gen="Generation Z";
    else if(2010<=k&&k<=2020) gen="Generation Alpha";
    else if(k>=2021) gen="Generation Beta";
    else gen="No Generation";
    return gen;
}
void Gen(){
    Generation a[100];
    int n; cin>>n;
    For(i,0,n){
        a[i].getInformation();
        a[i].getGen();
    }
    Display_list_by_Gen(a,n,2002);
}
void Hobb(){
    Hobbies a[100];
    int n; cin>>n;
    For(i,0,n){
        a[i].getInformation();
        a[i].getHobbies();
    }
    string k; cin>>k;
    Display_list_by_hobbies(a,n,k);
}
int main(){
    Hobb();
}

Person::Person(){
    name="No Name";
    date_of_birth="00/00/0000";
    address="No address";
}
Person::Person(string n,string d,string ad){
    name=n;
    date_of_birth=d;
    address=ad;
}
void Person::getInformation(){
    scanf("\n");
    getline(cin,name);
    cin>>date_of_birth;
    scanf("\n");
    getline(cin,address);
}
void Person::Display(){
    cout<<"Name: "<<name<<"."<<endl;
    cout<<"Date of birth: "<<date_of_birth<<endl;
    cout<<"Address: "<<address<<"."<<endl;
}
Hobbies::Hobbies(){
    hobbies="I have no hobbies";
}
Hobbies::Hobbies(string c){
    hobbies=c;
}
void Hobbies::getHobbies(){
    scanf("\n");
    getline(cin,hobbies);
}
void Hobbies::DisplayH(){
    if(hobbies!="I have no hobbies")
    cout<<"My hobby is "<<hobbies<<endl;
    else cout<<hobbies<<endl;
}
void Display_list_by_hobbies(Hobbies *list,int n,string k){
    int h=1;
    cout<<"Hobbies "<<k<<" :"<<endl;
    For(i,0,n){
        if(list[i].get_hobbies()==k){
            cout<<h<<endl;
            list[i].Display();
            h++;
        }
    }
}
Generation::Generation(){
    gen="No Gen";
}
Generation::Generation(string g){
    gen=g;
}
void Generation::getGen(){
    int k=getYear(getdate_of_birth());
    gen=generation(k);
}
void Generation::DisplayG(){
    cout<<gen<<endl;
}
void Display_list_by_Gen(Generation *list,int n,int k){
    int h=1;
    cout<<generation(k)<<" : "<<endl;
    For(i,0,n){
        if(list[i].get_gen()==generation(k)){
            cout<<h<<endl;
            list[i].Display();
            h++;
        }
    }
}