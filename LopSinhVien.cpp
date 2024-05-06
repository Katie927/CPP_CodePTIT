#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class SinhVien
{
private:
    /* data */
public:
    string Ten;
    string Lop;
    string NgaySinh;
    double GPA;
    void nhap()
    {
        getline(cin , Ten);
        cin>>Lop;
        cin>>NgaySinh;
        if(NgaySinh[2] != '/')  NgaySinh = "0"+NgaySinh;
        if(NgaySinh[5] != '/')  NgaySinh.insert(NgaySinh.begin() + 3 , '0');
        cin>>GPA;
    }
    void xuat()
    {
        cout<<"B20DCCN001 ";
        cout<<Ten<<" ";
        cout<<Lop<<" ";
        cout<<NgaySinh<<" ";
        cout<<fixed<<setprecision(2)<<GPA;
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}