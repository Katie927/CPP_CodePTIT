// #include<bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;

long long lcm(long long a, long long b){
    long long  m = a*b;
    while(a*b != 0){
        long long m = a%b;
        a = b;
        b = m;
    }
    return m/a;
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        long long x, y, z;
        long long n;
        cin>>x>>y>>z;
        cin>>n;
        long long dau = pow(10,n-1);
        long long cuoi = dau * 10;
        long long k = lcm(x, lcm(y,z));
        if(k >= cuoi)       cout<<-1<<endl;
        else{
            cout<<k*(long long)ceil(pow(10, n-1) / k)<<endl;
        }
    }
}

int main(){
    // freopen("PTIT.in","r",stdin);
    // freopen("PTIT.out","w",stdout);

    Dost();
    return 0;
}