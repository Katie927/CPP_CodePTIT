// #include<bits/stdc++.h>

#include<iostream>
#include<string>
#include<algorithm>
// #define ll long long

using namespace std;

long long gcd(long long a, long long b){
    while( a*b != 0){
        if(a>b)     a %= b;
        else        b %= a;
    }
}

class PhanSo
{
public:
    long long TuSo;
    long long MauSo;
    PhanSo(long long a=0, long long b=1){
        TuSo = a;
        MauSo = b;
    }
    void rutgon(){
        long long k = gcd(TuSo, MauSo);
        TuSo /= k;
        MauSo /= k;
    }

    friend istream &operator>>(istream &input , PhanSo &ps){
        cin>>ps.TuSo;
        cin>>ps.MauSo;
        return input;
    }
    friend ostream &operator<<(ostream &output , PhanSo ps){
        output<<ps.TuSo<<"/"<<ps.MauSo;
        return output;
    }
    PhanSo operator + (PhanSo  b){
        PhanSo ps;
        ps.TuSo = TuSo * b.MauSo + MauSo*b.TuSo;
        ps.MauSo = MauSo * b.MauSo;
        ps.rutgon();
        return ps;
    }
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}



/*
#include <bits/stdc++.h>
using namespace std;
class PhanSo{
	public:
	long long tu,mau;
	PhanSo(long long a=0,long long b=1){
		tu=a;
		mau=b;
	}
	void rutgon(){
		long long k=__gcd(tu,mau);
		tu/=k;
		mau/=k;
	}
	friend istream &operator>>(istream &input,PhanSo &a){
		cin>>a.tu>>a.mau;
		return input;
	}
	friend ostream &operator<<(ostream &output,PhanSo a){
		cout<<a.tu<<"/"<<a.mau;
		return output;
	}
	PhanSo operator + (PhanSo b){
		PhanSo a;
		a.tu=tu*b.mau+mau*b.tu;
		a.mau=mau*b.mau;
		a.rutgon();
		return a;
	}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}


*/