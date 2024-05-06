#include<iostream>
#include<string>
#include<cstring>
#define MAX 1001
#define SWAP(type,x,y) do{type tmp = x; x = y; y = tmp;}while(0)

using namespace std;

struct Human
{
    string Ten;
    string NgaySInh;
    string birth;
};

string ChuanNgaySinh(string s){
    char date[MAX] = "";
    int l=s.length();
    char year[MAX];
    s.copy(year , 4 , 6);
    strcat(date , year);
    char month[MAX];
    s.copy(month , 2 , 3);
    strcat(date , month);
    char day[MAX];
    s.copy(day , 2 , 0);
    strcat(date , day);

    return date;
}

void In(Human &hm){
    cin>>hm.Ten;
    cin>>hm.NgaySInh;
    hm.birth = ChuanNgaySinh(hm.NgaySInh);
}

void mm(Human nv[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(nv[i].birth > nv[j].birth){
                SWAP(Human , nv[i] , nv[j]);
            }
        }
    }
    cout<<nv[n-1].Ten<<endl<<nv[0].Ten;
}

void dost(){
    // freopen("PTIT.in","r",stdin);
    // freopen("PTIT.out","w",stdout);

    int n;
    cin>>n;
    Human hm[n];
    for(int i=0 ; i<n ; i++){
        In( hm[i] );
    }
    mm(hm , n);
}

int main(){
    dost();
    return 0;
}