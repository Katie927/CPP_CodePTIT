// #include<iostream>
// #include<string>
// #include<set>
#include<bits/stdc++.h>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        cin.ignore();
        string str0;
        cin>>str0;
        int k;
        cin>>k;
        set<char> check;
        for(char s : str0){
            check.insert(s);
        }
        int m = 26- check.size();
        if(m <= k)      cout<<"1"<<endl;
        else            cout<<"0"<<endl;
    }
}

int main(){
    dost();
    return 0;
}