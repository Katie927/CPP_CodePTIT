#include<iostream>
#include<string>

using namespace std;

void dost(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int l=str.length();
        int check=1;
        for(int i=0 ; i<l/2 ; i++){
            if( str[i] != str[l-i-1]){
                check=0;
                break;
            }
        }
        if(check == 1 )     cout<<"YES"<<endl;
        else                cout<<"NO"<<endl;
    }
}

int main(){
    dost();
    return 0;
}