#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

void ChuanHoTen(string &s){
    for(int i=0 ; i<s.length() ; i++){
        if(i == 0 || s[i-1] == ' '){
            s[i] = toupper(s[i]);
        }
        else{
            s[i] = tolower(s[i]);  
        }
    }
}

class SinhVien
{
public:
    string MaSv;
    string Ten;
    string Lop;
    string NgaySinh;
    double GPA;

    friend istream &operator>>(istream &input, SinhVien &sv){
        getline(cin , sv.Ten);
        ChuanHoTen(sv.Ten);
        cin>>sv.Lop;
        cin>>sv.NgaySinh;
        cin>>sv.GPA;
        sv.MaSv = "B20DCCN001";
        if(sv.NgaySinh[2] != '/')      sv.NgaySinh = "0" +sv.NgaySinh;
        if(sv.NgaySinh[5] != '/')      sv.NgaySinh.insert(sv.NgaySinh.begin()+ 3 , '0');
        return input;
    }   
    friend ostream &operator<<(ostream &output, SinhVien sv){
        cout<<sv.MaSv<<" ";
        cout<<sv.Ten<<" ";
        cout<<sv.Lop<<" ";
        cout<<sv.NgaySinh<<" ";
        cout<<fixed<<setprecision(2)<<sv.GPA;
        return output;
    }
};

int main(){
    freopen("PTIT.in","r",stdin);
    freopen("PTIT.out", "w",stdout);

    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}