#include<iostream>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n;
        int x;
        cin>>n>>x;
        int A[n];
        int check = -1;
        int pos = -1;
        for(int i=0 ; i<n ; i++){
            cin>>A[i];
            if(A[i] == x){
                check = 1;
                pos = i+1;
            }
        }
        cout<<pos<<endl;
    }
}

int main(){
    dost();
    return 0;
}