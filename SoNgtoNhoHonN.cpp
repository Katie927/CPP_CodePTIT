#include<iostream>
#define MAX 10007

using namespace std;

bool check[MAX];
void sangnt(){
    check[0] = true;
    check[1] = true;
    for(int i=2 ; i<MAX ; i++){
        if(!check[i]){
            for(int j=i*2 ; j<MAX ; j+=i){
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
        for(int i=2 ; i<=n ; i++){
            if(check[i] == false){
                cout<<i<<" ";
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