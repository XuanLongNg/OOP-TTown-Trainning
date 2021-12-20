#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Fraction{
    private:
    int numerator;
    int denominator;
    public:
    Fraction(){
        numerator=0;
        denominator=1;
    }
    Fraction(int n,int d){
        numerator=n;
        denominator=d;
    }
    friend istream &operator>>(istream &in,Fraction &p){
        in>>p.numerator;
        in>>p.denominator;
        return in;
    }
    friend ostream &operator<<(ostream &out,Fraction &p){
        out<<p.numerator<<"/"<<p.denominator<<endl;
        return out;
    }
    void Compact(){
        int k=__gcd(numerator,denominator);
        numerator/=k;
        denominator/=k;
    }
    void Abs(){
        if(numerator<0||denominator<0){
            numerator=abs(numerator);
            denominator=abs(denominator);
            numerator=-numerator;
        }else if(numerator<0&&denominator<0){
            numerator=abs(numerator);
            denominator=abs(denominator);
        }
    }
    Fraction Total(Fraction a){
        Fraction c;
        c.numerator=numerator*a.denominator+a.numerator*denominator;
        c.denominator=denominator*a.denominator;
        c.Compact();
        c.Abs();
        return c;
    }
    Fraction subtract(Fraction a){
        Fraction c;
        c.numerator=numerator*a.denominator-a.numerator*denominator;
        c.denominator=denominator*a.denominator;
        c.Compact();
        c.Abs();
        return c;
    }
    Fraction multiplication(Fraction a){
        Fraction c;
        c.numerator=numerator*a.numerator;
        c.denominator=denominator*a.denominator;
        c.Compact();
        c.Abs();
        return c;
    }
    Fraction division(Fraction a){
        Fraction c;
        c.numerator=numerator*a.denominator;
        c.denominator=denominator*a.numerator;
        c.Compact();
        c.Abs();
        return c;
    }
};

int main(){
    Fraction a,b,c,d,e,f;
    cin>>a>>b;
    a.Compact();
    b.Compact();
    c=a.Total(b);
    d=a.subtract(b);
    e=a.multiplication(b);
    f=a.division(b);
    cout<<a<<b<<c<<d<<e<<f;
}