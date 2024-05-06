#include<iostream>

using namespace std;

void dost(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long f0=0;
        long long f1=1;
        long long fn=1;
        for(int i=2 ; i<=n ; i++){
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        cout<<fn<<endl;
    }
}

int main(){
    dost();
    return 0;
}