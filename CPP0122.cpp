#include<iostream>

using namespace std;

long long gcd(long long a, long long b){
    while(a*b != 0){
        if(a>b){
            a %= b;
        }
        else{
            b %= a;
        }
    }
    return a+b;
}
long long lcm(long long a, long long b){
    long long bcnn = (a*b)/gcd(a,b);
    return bcnn;
}

void dost(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long k = 1;
        for(long long i=1 ; i<=n ; i++){
            k = lcm(k,i);
        }
        cout<<k<<endl;
    }
}

int main(){
    dost();
    return 0;
}