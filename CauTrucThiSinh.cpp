#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

struct ThiSinh{
    string Ten;
    string NgaySinh;
    double Diem1;
    double Diem2;
    double Diem3;
    double TongDiem;
};

void nhap(struct ThiSinh &A){
    getline(cin, A.Ten);
    getline(cin, A.NgaySinh);
    cin>>A.Diem1;
    cin>>A.Diem2;
    cin>>A.Diem3;
    A.TongDiem = A.Diem1 + A.Diem2 + A.Diem3;
}

void in(struct ThiSinh A){
    cout<<A.Ten<<" ";
    cout<<A.NgaySinh<<" ";
    cout<<fixed<<setprecision(1)<<A.TongDiem;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}