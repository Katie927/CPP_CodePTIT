#include<iostream>
#include<string>

using namespace std;

struct MonHoc
{
    string MaMh;
    int SoTC;
    double DiemKT;
    double DiemThi;
};
struct SinhVien
{
    string MaSV;
    string Ten;
    string Lop;
    int k;
    struct MOnHoc msv[k];
};

void dost(){
    int m,n;
    cin>>m>>n;

    struct MonHoc mh[n];
    for(int i=0 ; i<n ; i++){
        cin.ignore();
        cin>>mh[i].MaMh;
        cin>>mh[i].SoTC;
        cin>>mh[i].DiemKT;
        cin>>mh[i].DiemThi;
    }

    struct SinhVien sv[m];
    for(int i=0 ; i<m ; i++){
        cin.ignore();
        cin>>sv[i].MaSV;
        getline(cin,sv[i].Ten);
        cin>>sv[i].Lop;
        int k;
        cin>>k;
        
    }
    
}

int main(){
    dost();
    return 0;
}