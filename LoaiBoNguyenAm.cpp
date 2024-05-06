#include<iostream>
#include<string>

using namespace std;

bool check(char c){
    return c == 'u' || c =='e' || c=='o' || c=='a' || c=='i' || c=='y';
}

void dost(){
    string s0;
    cin>>s0;
    for(int i=0 ; i<s0.length() ; i++){
        s0[i] = tolower(s0[i]);
        if( !check(s0[i]) ){
            cout<<"."<<s0[i];
        }
    }
}

int main(){
    dost();
    return 0;
}