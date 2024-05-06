#include<iostream>
#include<string>
#include<set>

using namespace std;

void dost(){
    int t;
    cin>>t;
    string str0;
    set<string> s;
    cin.ignore();
    while(t--){
        getline(cin, str0);
        s.insert(str0);
    }
    cout<<s.size();
}

int main(){
    dost();
    return 0;
}