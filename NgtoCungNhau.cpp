#include<iostream>
#define MAX 100001

using namespace std;

bool Prime[MAX];
void isPrime(){
    Prime[0] = true;
    Prime[1] = true;
    for(int i=2 ; i<MAX ; i++){
        if( !Prime[i] ){
            for(int j = 2*i ; j<MAX  ; j+=i){
                Prime[j] = true;
            }
        }
    }
}

long long gcd(long long a, long long b){
    while(a*b != 0){
        if(a > b){
            a %= b;
        }
        else{
            b %= a;
        }
    }
    return a+b;
}

void dost(){
    int test;
    cin>>test;
    while(test--){
        int  n;
        cin>>n;
        int t=0;
        for(int i=1 ; i<n ; i++){
            if(gcd(i , n) == 1)     t++;
        }
        // if( Prime[t] == true )      cout<<"0"<<endl;
        // else                        cout<<"!"<<endl;
        cout<<!Prime[t]<<endl;
    }
}

int main(){
    isPrime();
    dost();
    return 0;
}