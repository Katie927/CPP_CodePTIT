#include<iostream>
#define MAX 10001

using namespace std;

bool Prime[MAX];
void isPrime(){
    Prime[0] = true;
    Prime[1] = true;
    for(int i=2 ; i<MAX ; i++){
        if( !Prime[i] ){
            for(int j=i*2 ; j<MAX ; j+=i){
                Prime[j] = true;
            }
        }
    }
}

void dost(){
    int test;
    cin>>test;
    while(test--){
        long long n,m;
        cin>>n>>m;
        int dem=0;
        for(int i=n ; i<=m ; i++){
            if(!Prime[i] )  dem++;
        }
        cout<<dem<<endl;
    }
}

int main(){
    isPrime();
    dost();
    return 0;
}