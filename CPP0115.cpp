#include<iostream>
#define MAX 10000000

using namespace std;

int check[MAX];
void sangnt(){
    for(int i=2 ; i<MAX ; i++){
        check[i] = 1;
    }
    for(int i=2 ; i<MAX ; i++){
        if(check[i] == 1){
            for(int j=2*i ; j<MAX ; j+=i){
                check[j]=0;
            }
        }
    }
}

void dost(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        for(int i=2 ; i<=n ; i++){
            if(check[i] == 1){
                int somu=0;
                while(n % i == 0){
                    somu++;
                    n/=i;
                }
                if(somu != 0){
                    cout<<i<<" "<<somu<<" ";
                }
            }
        }
        cout<<endl;
    }
}

int main(){
    sangnt();
    dost();
    return 0;
}