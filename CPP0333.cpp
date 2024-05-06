#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

void dost(){
    string str0;
    getline(cin, str0);
    for(int i=0 ; i<str0.length() ; i++){
        if(i == 0 || str0[i-1] == ' '){
            str0[i] = toupper(str0[i]);
        }
        else{
            str0[i] = tolower(str0[i]);  
        }
    }
    stringstream ss(str0);
    vector<string> v0;
    string tmp;
    while(ss >> tmp){
        v0.push_back(tmp);
    }
    for(int i=0 ; i< tmp.length() ; i++){
        tmp[i] = toupper(tmp[i]);
    }
    for(int i=0 ; i<v0.size()-1 ; i++){
        cout<<v0[i];
        if(i < v0.size()-2)     cout<<" ";
        else                    cout<<", ";
    }
    cout<<tmp;
    //cout<<endl<<tmp;
}

int main(){
    dost();
    return 0;
}