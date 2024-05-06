#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#define MAX_ARR_SIZE 101

#define SWAP(type, x, y) do{type tmp = x; x = y; y = tmp;}while(0);

using namespace std;

struct SinhVien
{
    string MaSV;
    string Ten;
    string Lop;
    float Diem1;
    float Diem2;
    float Diem3;
};

void nhap(SinhVien &sv){
    getline(cin , sv.MaSV);
    getline(cin , sv.Ten);
    getline(cin , sv.Lop);
    cin>>sv.Diem1;
    cin>>sv.Diem2;
    cin>>sv.Diem3;
}
void in(SinhVien sv){
    cout<<sv.MaSV<<" ";
    cout<<sv.Ten<<" ";
    cout<<sv.Lop<<" ";
    cout<<fixed<<setprecision(1)<<sv.Diem1<<" ";
    cout<<fixed<<setprecision(1)<<sv.Diem2<<" ";
    cout<<fixed<<setprecision(1)<<sv.Diem3<<"\n";
}
void in_ds(SinhVien sv[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<i+1<<" ";
        in(sv[i]);
    }
}

void sap_xep(SinhVien sv[] , int n){
    for(int i=0  ; i<n-1 ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(sv[i].Ten > sv[j].Ten){
                SWAP(SinhVien , sv[i] , sv[j]);
            }
        }
    }
}

int main(){
    freopen("PTIT.in","r",stdin);
    freopen("PTIT.out","w",stdout);
    
    int n;
    cin >> n;
    struct SinhVien ds[MAX_ARR_SIZE];
    for(int i = 0; i < n; i++) {
        cin.ignore();
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);

    return 0;
}