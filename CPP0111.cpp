#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int solienke(string str0){
    int check=1;
    int l=str0.length();
    for(int i=1 ; i<l ; i++){
        if( abs(str0[i] - str0[i-1]) != 1){
            check=0;
            break;
        }
    }
    return check;
}

void dost(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string str0;
        cin>>str0;
        if(solienke(str0) == 1)     cout<<"YES"<<endl;
        else                        cout<<"NO"<<endl;
    }
}

int main(){
    dost();
    return 0;
}