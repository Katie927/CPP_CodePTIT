#include<iostream>
#include<string>

using namespace std;

void dost(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%100 == 86)     cout<<"1"<<endl;
        else                cout<<"0"<<endl;
    }
}

int main(){
    dost();
    return 0;
}