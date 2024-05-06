#include<iostream>
#include<math.h>

using namespace std;

void tongchuso(long long &n){
    long long sum=0;
    while(n>0){
        sum = sum + n%10;
        n/=10;
    }
    if(sum>=10){
        tongchuso(sum);
    }
    n=sum;
}

void dost(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        tongchuso(n);
        cout<<n<<endl;
    }
}

int main(){
    dost();
    return 0;
}