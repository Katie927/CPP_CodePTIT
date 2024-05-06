#include<iostream>

using namespace std;

void dost(){
    long long n;
    cin>>n;
    long long sum=0;
    for(int i=1 ; i<=n ; i++){
        long long s=1;
        for(int j=1 ; j<=i ; j++){
            s=s*j;
        }
        sum+=s;
    }
    cout<<sum;
}

int main(){
    dost();
    return 0;
}