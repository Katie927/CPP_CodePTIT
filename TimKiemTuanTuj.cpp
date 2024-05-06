#include<iostream>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n,x;
        cin>>n>>x;
        int A[n];
        int pos = -1;
        for(int i=0 ; i<n ; i++){
            cin>>A[i];
        }
        for(int i=0 ; i<n ; i++){
            if(A[i] == x){
                pos = i+1;
                break;
            }
        }
        cout<<pos<<endl;
    }
}

int main(){
    dost();
    return 0;
}