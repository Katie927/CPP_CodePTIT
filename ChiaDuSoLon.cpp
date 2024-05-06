#include<iostream>
#include<string>

using namespace std;

long long big_mod(string a, long long b)
{
    long long res = 0;
    for (int i = 0; i < a.size(); ++i)
        res = (res * 10 + (a[i] - '0')) % b;
        
    return res;
}

void dost(){
    int test;
    cin>>test;
    while(test--){
        string n;
        long long m;
        cin >> n;
        cin >> m;
        long long k = big_mod(n , m);
        cout<<k<<endl;
    }
}

int main(){
    dost();
    return 0;
}