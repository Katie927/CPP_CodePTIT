#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
#include<vector>
#define MAX 10001

#define SWAP(type,x,y) do{type tmp = x; x = y; y = tmp;}while(0)

using namespace std;

int g_mnv = 1;

struct NhanVien 
{
    int MaNV ;
    string HoTen;
    string GioiTinh;
    string NgaySinh;
    string birth;
    string DiaChi;
    string MaSoThue;
    string NgayKiHd;
};

string ChuanNgaySinh(string s){
    char date[MAX] = "";
    int l=s.length();
    char year[MAX];
    s.copy(year , 4 , 6);
    strcat(date , year);
    char month[MAX];
    s.copy(month , 2 , 0);
    strcat(date , month);
    char day[MAX];
    s.copy(day , 2 , 3);
    strcat(date , day);

    return date;
}

void nhap(struct NhanVien &nv){
    cin.ignore();
    getline(cin , nv.HoTen);
    cin>>nv.GioiTinh;
    cin>>nv.NgaySinh;
    nv.birth = ChuanNgaySinh(nv.NgaySinh);
    cin.ignore();
    getline(cin , nv.DiaChi);
    cin>>nv.MaSoThue;
    cin>>nv.NgayKiHd;
    nv.MaNV = g_mnv++;
}

void in(struct NhanVien nv){
    cout<<setfill('0') << setw(5) << nv.MaNV++ <<" ";
    cout<<nv.HoTen<<" ";
    cout<<nv.GioiTinh<<" ";
    cout<<nv.NgaySinh<<" ";
    cout<<nv.DiaChi<<" ";
    cout<<nv.MaSoThue<<" ";
    cout<<nv.NgayKiHd;
   // cout<<endl<<ChuanNgaySinh(nv.NgaySinh);
}

void sapxep(NhanVien nv[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(nv[i].birth > nv[j].birth){
                SWAP(NhanVien , nv[i] , nv[j]);
            }
        }
    }
}

void inds(NhanVien ds[] , int n){
    for(int i=0 ; i<n ; i++){
        // cout<<setfill('0') << setw(5) << i+1 <<" ";
         in(ds[i]);
         cout<<endl;
    }
}

int main(){
    freopen("PTIT.in","r",stdin);
    freopen("PTIT.out","w",stdout);
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}