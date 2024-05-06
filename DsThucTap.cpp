#include<iostream>
#include<string>

#define MAX_ARR_SIZE 101
#define SWAP(type,x,y) do{type tmp = x; x = y; y = tmp;}while(0)

using namespace std;

struct SinhVien
{
    int STT;
    string MaSV;
    string Ten;
    string Lop;
    string email;
    string CTy;
};
struct CongTy
{
    string Ten;
};

void In0(SinhVien &sv , int i){
    sv.STT = i;
    getline(cin , sv.MaSV);
    getline(cin, sv.Ten);
    cin>>sv.Lop;
    cin>>sv.email;
    cin>>sv.CTy;
}
void Out0(SinhVien sv){
    cout<<sv.STT<<" ";
    cout<<sv.MaSV<<" ";
    cout<<sv.Ten<<" ";
    cout<<sv.Lop<<" ";
    cout<<sv.email<<" ";
    cout<<sv.CTy<<endl;
}

void sapxep(SinhVien sv[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(sv[i].MaSV > sv[j].MaSV){
                SWAP(SinhVien , sv[i] , sv[j]);
            }
        }
    }
}

void dost(){
    // freopen("PTIT.in","r",stdin);
    // freopen("PTIT.out","w",stdout);

    int n;
    cin>>n;
    SinhVien sv[MAX_ARR_SIZE];
    for(int i=0 ; i<n ; i++){
        cin.ignore();
        In0(sv[i] , i+1);
    }
    sapxep(sv , n);
    int q;
    cin>>q;
    CongTy ct[MAX_ARR_SIZE];
    for(int i=0 ; i<q ; i++){
        cin>>ct[i].Ten;
    }
    for(int i=0 ; i<q ; i++){
        for(int j=0 ; j<n ; j++){
            if(ct[i].Ten == sv[j].CTy){
                Out0(sv[j]);
                cout<<endl;
            }
        }
    }
    // for(int i=0 ; i<n ; i++){
    //     Out0(sv[i]);
    //     cout<<endl;
    // }

}

int main(){
    dost();
    return 0;
}