#include<iostream>
#include<string>

using namespace std;

class KhachHang
{
private:
    /* data */
public:
    string MaKH;
    string Ten;
    string GioiTinh;
    string NgaySinh;
    string DiaChi;
    friend istream &operator>>(istream &input, KhachHang &kh){
        getline(cin , kh.Ten);
        cin>>kh.GioiTinh;
        cin>>kh.NgaySinh;
        cin>>kh.DiaChi;

        return input;
    }   
};

class MatHang
{
    string MaMh;
    string Ten;
    string DonVi;
    int Mua;
    int Ban;

    friend istream &operator>>(istream &input, MatHang &mh){
        cin.ignore();
        getline(cin , mh.Ten);
        cin>>mh.DonVi;
        cin>>mh.Mua;
        cin>>mh.Ban;

        return input;
    }
};

class HoaDon
{
    public:
        string MaHD;
        string MaKH;
        string Mamh;
        friend class KhackHang;
        friend class MatHang;
        friend istream &operator>>(istream &input, HoaDon &hd){
            cin>>hd.MaKH;
            cin>>hd.Mamh;
            return input;
        }
        friend ostream &operator<<(ostream &output, HoaDon hd){
            cout<<hd.MaHD;
            cout<<

            return output;
        }
};


int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}