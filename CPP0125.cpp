#include<iostream>
#define MAX 1000007

using namespace std;

bool check[MAX];
void sangnt(){
    check[0] = true;
    check[1] = true;
    for(long i=2 ; i<MAX ; i++){
        if(!check[i]){
            for(long j=2*i ; j<MAX ; j+=i){ 
                check[j] = true;
            }
        }
    }
}

void dost(){
    long a;
    long b;
    cin>>a>>b;
    long m,n;
    if(a>b){
        m=a;
        n=b;
    }
    else{
        m=b;
        n=a;
    }
    for(long i=n ; i<=m ; i++){
        if(!check[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    sangnt();
    int t;
    cin>>t;
    while(t--){
        dost();
        cout<<endl;
    }
    return 0;
}