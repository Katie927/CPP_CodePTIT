#include<iostream>
#include<string>
#include<iomanip>
#include<vector>

using namespace std;

struct SinhVien{
    string Ten;
    string Lop;
    string NgaySinh;
    float GPA;
};

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

void nhapThongTinSV(struct SinhVien &A){
    getline(cin, A.Ten);
    cin>>A.Lop;
    cin>>A.NgaySinh;
    cin>>A.GPA;
}

void inThongTinSV(struct SinhVien A){
    cout<<"N20DCCN001\t";
    cout<<A.Ten<<"\t"<<A.Lop<<"\t";
    ChuanNgaySinh(A.NgaySinh);
    cout<<"\t"<<fixed<<setprecision(2)<<A.GPA;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}