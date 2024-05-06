#include<iostream>
#include<string>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        cin.ignore();
        string s0;
        getline(cin,s0);
        int L=s0.length();
        int sotu=1;
        for(int i=0 ; i<L ; i++){
            if(s0[i] != ' ' && (s0[i-1] == ' ' || s0[i-1] == '\n' || s0[i-1] == '\t'))      sotu++;
        }
        cout<<sotu<<endl;
    }
}

int main(){
    dost();
    return 0;
}