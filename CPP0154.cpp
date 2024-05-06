#include<iostream>

using namespace std;

void dost(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long s=0;
        for(int i=1; i<=n ; i++){
            s+=i%k;
        }
        if(s == k)      cout<<"1"<<endl;
        else            cout<<"0"<<endl;
    }
}

int main(){
    dost();
    return 0;
}