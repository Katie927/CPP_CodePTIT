#include<iostream>
#include<string>
#include<iomanip>

#define SWAP(type,x,y) do{type tmp = x; x = y; y = tmp;}while(0)

using namespace std;

struct HangHoa{
    int Ma;
    string Ten;
    string Nhom;
    double GiaMua;
    double GiaBan;
    double LoiNhuan;
};

void nhap1( HangHoa &hh){
    cin.ignore();
    getline(cin, hh.Ten);
    // cin.ignore();
    getline(cin, hh.Nhom);
    cin>>hh.GiaMua;
    cin>>hh.GiaBan;
    hh.LoiNhuan = hh.GiaBan - hh.GiaMua;
}
void xuat1( HangHoa hh ){
    cout<<hh.Ma<<" ";
    cout<<hh.Ten<<" ";
    cout<<hh.Nhom<<" ";
    cout<<fixed<<setprecision(2)<<hh.LoiNhuan<<endl;
}

void sapxep(HangHoa arr[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i].LoiNhuan < arr[j].LoiNhuan){
                SWAP(HangHoa , arr[i] , arr[j]);
            }
        }
    }
}

void dost(){
    int n;
    cin>>n;
    HangHoa arr[n];
    for(int i=0 ; i<n ; i++ ){
        arr[i].Ma = i+1;
        nhap1(arr[i]);
    }
    sapxep(arr , n);
    for(int i=0 ; i<n ; i++){
        xuat1(arr[i]);
    }
}

int main(){
    dost();
    return 0;
}