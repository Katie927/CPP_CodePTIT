#include<iostream>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n,x;
        cin>>n>>x;
        int A[n];
        int check = 0;
        for(int i=0 ; i<n ; i++){
            cin>>A[i];
            if(A[i] == x)       check = 1;
        }
        if(check == 1)      cout<<"1"<<endl;
        else                cout<<"-1"<<endl;
    }
}

int main(){
    dost();
    return 0;
}