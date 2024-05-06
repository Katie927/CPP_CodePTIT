#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

void dost(){
    int test;
    cin>>test;
    cin.ignore();
    while(test--){
        string s;
        getline(cin, s);
        vector<string> v0;
        stringstream ss(s);
        string tmp;
        while(ss>>tmp){
            v0.push_back(tmp);
        }
        for(int i=v0.size()-1 ; i>=0 ; i--){
            cout<<v0[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    dost();
    return 0;
}