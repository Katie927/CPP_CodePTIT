#include<iostream>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n, x;
        cin>>n>>x;
        int A[n];
        int dem=0;
        for(int i=0 ; i<n ; i++){
            cin>>A[i];
            if(A[i] == x)       dem++;
        }
        if(dem>0)           cout<<dem<<endl;
        else                cout<<--dem<<endl;
    }
}

int main(){
    dost();
    return 0;
}