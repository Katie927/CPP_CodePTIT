#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

void dost(){
    string str0;
    getline(cin, str0);
    for(int i=0 ; i<str0.length()  ; i++){
        str0[i] = tolower(str0[i]);
    }
    vector<string> v0;
    stringstream ss(str0);
    string tmp;
    while(ss>>tmp){
        v0.push_back(tmp);
    }
    cout<<v0[v0.size()-1];
    for(int i=0 ; i<v0.size()-1 ; i++){
        cout<<v0[i][0];
    }
    cout<<"@ptit.edu.vn";
    //cout<<endl<<endl<<tmp;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        dost();
        cout<<endl;
    }
    
    return 0;
}

// #include <bits/stdc++.h> 
// using namespace std; 
// int main(){ 
//     string s; 
//     getline(cin,s); 
//     for(int i=0;i<s.length();i++){ 
//         s[i]=tolower(s[i]); 
//     } 
//     stringstream ss(s); 
//     string tmp; 
//     vector <string> v;
//     while(ss>>tmp){ 
//         v.push_back(tmp); 
//     } 
//     int l=v.size(); 
//     cout<<v[l-1]; 
//     for(int i=0;i<l-1;i++){ 
//         cout<<v[i][0]; 
//     } 
//     cout<<"@ptit.edu.vn"; 
// }