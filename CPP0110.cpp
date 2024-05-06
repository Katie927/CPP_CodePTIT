#include<iostream>
#include<string>

using namespace std;

void dost(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string str0;
        cin>>str0;
        int pos=str0.find("084");
        str0.erase(str0.begin() + pos, str0.begin() + pos + 3);
        cout<<str0<<endl;
    }
}

int main(){
    dost();
    return 0;
}