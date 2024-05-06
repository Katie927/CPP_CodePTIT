#include<iostream>
#include<string>

using namespace std;

int tn(string s){
    int n = s.length();
    for(int i=0 ; i<n/2 ; i++){
        if(s[i] != s[n-i-1] || s[i] % 2 != 0)        return 0;
    }
    return 1;
}

void dost(){
    int t;
    cin>>t;
    while(t--){
        cin.ignore();
        string str0;
        cin>>str0;
        if(tn(str0) == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

int main(){
    dost();
    return 0;
}