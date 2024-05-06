#include<iostream>

using namespace std;

struct PhanSo
{
    long long tuSo;
    long long mauSo;
};

long long gcd(long long a, long long b){
    while(a*b != 0){
        if(a > b){
            a %= b;
        }
        else{
            b %= a;
        }
    }
    return a+b;
}
long long lcm(long long a, long long b){
    long long bcnn = (a*b)/gcd(a,b);
    return bcnn;
}

void nhap(struct PhanSo &ps1){
    cin>>ps1.tuSo;
    cin>>ps1.mauSo;
}

void in(struct PhanSo ps1){
    cout<<ps1.tuSo<<"/"<<ps1.mauSo;
}

void rutgon(struct PhanSo &A){
    long long n = A.mauSo;
    long long m = A.tuSo;
    long long x = gcd( n , m );
    A.mauSo /= x;
    A.tuSo /= x;
}

PhanSo tong(PhanSo ps1 , PhanSo ps2){
    rutgon(ps1);
    rutgon(ps2);
    long long k = lcm(ps1.mauSo , ps2.mauSo);
    PhanSo ps0;
    ps0.tuSo = ps1.tuSo*(k / ps1.mauSo) + ps2.tuSo*(k / ps2.mauSo);
    ps0.mauSo = k;
    return ps0;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}