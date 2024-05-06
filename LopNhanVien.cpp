#include<iostream>
#include<string>

using namespace std;

class NhanVien
{
public:
    string MaNv = "00001";
    string HoTen;
    string GioiTinh;
    string NgaySinh;
    string DiaChi;
    string MaThue;
    string NgayHd;

    void nhap(){
        getline(cin, HoTen);
        cin>>GioiTinh;
        cin>>NgaySinh;
        cin.ignore();
        getline(cin,DiaChi);
        cin>>MaThue;
        cin>>NgayHd;
    }
    void xuat(){
        cout<<MaNv<<" ";
        cout<<HoTen<<" ";
        cout<<GioiTinh<<" ";
        cout<<NgaySinh<<" ";
        cout<<DiaChi<<" ";
        cout<<MaThue<<" ";
        cout<<NgayHd;
    }
};

int main(){
freopen("PTIT.in","r",stdin);
freopen("PTIT.out","w",stdout);

    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}