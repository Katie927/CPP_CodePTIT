#include<iostream>
#include<string>
#include<set>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        cin.ignore();
        string str0;
        cin>>str0;
        int dem=1;
        for(int i=1 ; i<=str0.length() ; i++){
            if(str0[i] != str0[i-1]){
                cout<<str0[i-1]<<dem;
                dem=1;
            }
            else{
                dem++;
            }
        }
        cout<<endl;
    }
}

int main(){
    dost();
    return 0;
}