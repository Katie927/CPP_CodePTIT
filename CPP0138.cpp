#include<iostream>

using namespace std;

bool check[10000];
void sangnt(){
    check[0]=true;
    check[1]=true;
    for(int i=2 ; i<10000 ; i++){
        if(!check[i]){
            for(int j=2*i ; j<10000 ; j+=i){
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
        for(int i=2 ; i<=n/2 ; i++){
            if(check[i] == false && check[n-i] == false){
                cout<<i<<" "<<n-i;
                break;
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