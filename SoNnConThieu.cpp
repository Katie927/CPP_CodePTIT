#include<iostream>

using namespace std;
void dost(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int A[n-1];
        int k = 0;
        for(int i=0 ; i<n-1 ; i++){
            cin>>A[i];
            if(A[i] != i+1 && k == 0){
                k = i+1;
            }
        }
        cout<<k<<endl;
    }
}

int main(){
    dost();
    return 0;
}