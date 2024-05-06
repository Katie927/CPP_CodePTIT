#include<iostream>
#include<string>
#include<sstream>

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    cin.ignore();
    while(test--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string a;
        int dem = 0;
        while(ss >> a){
            a[0] = toupper(a[0]);
            for(int i=1 ; i<a.length() ; i++){
                a[i] = tolower(a[i]);
            }
            cout<<a<<" ";
        }
        cout<<endl;
    }
}

int main(){
    freopen("PTIT.in","r",stdin);
    freopen("PTIT.out","w",stdout);

    Dost();
    return 0;
}