#include<iostream>
#include<string>
#include<algorithm>
#include<numeric>
// #include<bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){
    // long long a = m;
    // long lon g b = n;
    while( a*b != 0){
        if(a>b)     a%=b;
        else        b%=a;
    }
    return a+b;
}
// long long _lcm(long long a, long long b){
//     return (a*b)/_gcd(a,b);
// }

class PhanSo
{
public:
    long long TuSo;
    long long MauSo;

    PhanSo(long long a, long long b){
        TuSo = a;
        MauSo = b;
    };
    void rutgon(){
        long long x = gcd(TuSo, MauSo);
        TuSo /= x;
        MauSo /= x;
    }

    friend istream &operator>>(istream &input, PhanSo &ps){
        input>>ps.TuSo;
        input>>ps.MauSo;
        return input;
    }
    friend ostream &operator<<(ostream &output, PhanSo &ps){
        output<<ps.TuSo<<"/"<<ps.MauSo;
        return output;
    }
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}