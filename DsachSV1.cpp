#include<iostream>
#include<string>
#include<iomanip>
#include<vector> 
#include<sstream>

using namespace std;

struct SinhVien{
    string Ten;
    string Lop;
    string NgaySinh;
    double GPA;
};

void ChuanHoTen(string s){
    for(int i=0 ; i<s.length() ; i++){
        if(i == 0 || s[i-1] == ' '){
            s[i] = toupper(s[i]);
        }
        else{
            s[i] = tolower(s[i]);  
        }
    }
    stringstream ss(s);
    vector<string> v0;
    string tmp;
    while(ss >> tmp){
        v0.push_back(tmp);
    }
    for(int i=0 ; i<v0.size() ; i++){
        cout<<v0[i]<<" ";
    }
}

void ChuanNgaySinh(string s){
    int l=s.length();
    int mark;
    vector<char> date;
    for(int i=0 ; i<l ; i++){
        date.push_back(s[i]);
    }
    if(date[2] != '/'){
        date.insert(date.begin() + 0 , '0');
    }
    mark++;
    if(date[5] != '/'){
        date.insert(date.begin() + 3 , '0');
    }
    for(int i=0 ; i<date.size() ; i++){
        cout<<date[i];
    }
}

void nhap1(struct SinhVien &sv){
    getline(cin, sv.Ten);
    cin>>sv.Lop;
    cin>>sv.NgaySinh;
    cin>>sv.GPA;
}

void in1(struct SinhVien sv){
 //   cout<<setfill('0') << setw(5) << nv.MaNV++ <<" ";
  //  cout<<"N20DCCN001\t";
    ChuanHoTen(sv.Ten);
    cout<<sv.Lop<<" ";
    ChuanNgaySinh(sv.NgaySinh);
    cout<<" "<<fixed<<setprecision(2)<<sv.GPA;
}

void nhap(SinhVien ds[] , int n){
    for(int i=0 ; i<n ; i++){
        cin.ignore();
        nhap1(ds[i]);
    }
}
void in(SinhVien ds[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<"B20DCCN"<<setfill('0') << setw(3) << i+1 <<" ";
        in1(ds[i]);
        cout<<endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}