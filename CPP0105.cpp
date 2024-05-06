#include<iostream>
#include<string>

using namespace std;

void dost(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int check=1;
        for(int i=0 ; i<s.length() ; i++){
            if( s[i] != '0' && s[i] != '6' && s[i] != '8' ){
                check = 0;
                break;
            }
        }
        if(check == 1)  cout<<"YES"<<endl;
        else            cout<<"NO"<<endl;
    }
}

int main(){
    dost();
    return 0;
}