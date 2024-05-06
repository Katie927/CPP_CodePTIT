#include<iostream>

using namespace std;

struct PhanSo{
    long long mauSo;
    long long tuSo;
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

void nhap(struct PhanSo &A){
    cin>> A.mauSo;
    cin>> A.tuSo;
}
void in(struct PhanSo A){
    cout<< A.mauSo << "/" << A.tuSo;
}

void rutgon(struct PhanSo &A){
    long long n = A.mauSo;
    long long m = A.tuSo;
    long long x = gcd( n , m );
    A.mauSo /= x;
    A.tuSo /= x;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}