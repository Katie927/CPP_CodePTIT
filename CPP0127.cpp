#include<iostream>
#define MAX 1000007

using namespace std;

bool check[MAX];
void sangnt(){
    check[0] = true;
    check[1] = true;
    for(int i=2 ; i<MAX ; i++){
        if(!check[i]){
            for(int j=2*i ; j<MAX ; j+=i){
                check[j] = true;
            }
        }
    }
}

void dost(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=2 ; i<=n/2+1 ; i++){
            if(!check[i] && !check[n-i] && i<=n/2){
                cout<<i<<" "<<n-i<<endl;
                break;
            }
            else if(i > n/2){
                cout<<"-1"<<endl;
            }
        }
    }
}

int main(){
    sangnt();
    dost();
    return 0;
}