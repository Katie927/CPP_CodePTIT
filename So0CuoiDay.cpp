#include<iostream>
#include<vector>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<long long> v0;
        long long A[n];
        for(int i=0 ; i<n ; i++){
            cin>>A[i];
            if(A[i] !=0)        v0.push_back(A[i]);
        }
        for(int i=0 ; i<n ; i++){
            if(A[i] == 0)       v0.push_back(A[i]);
        }
        for(int i=0 ; i<v0.size() ; i++){
            cout<<v0[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    dost();
    return 0;
}