#include<iostream>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

struct NhanVien 
{
    string MaNV = "00001";
    string HoTen;
    string GioiTinh;
    string NgaySinh;
    string DiaChi;
    string MaSoThue;
    string NgayKiHd;
};

void nhap(struct NhanVien &nv){
    getline(cin , nv.HoTen);
    getline(cin, nv.GioiTinh);
    getline(cin, nv.NgaySinh);
    getline(cin , nv.DiaChi);
    getline(cin, nv.MaSoThue);
    getline(cin, nv.NgayKiHd);
}

void in(struct NhanVien nv){
    cout<<nv.MaNV<<" ";
    cout<<nv.HoTen<<" ";
    cout<<nv.GioiTinh<<" ";
    cout<<nv.NgaySinh<<" ";
    cout<<nv.DiaChi<<" ";
    cout<<nv.MaSoThue<<" ";
    cout<<nv.NgayKiHd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}