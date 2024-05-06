#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int m,n;
        cin>>m>>n;
        int M[m];
        int N[n];
        vector<int> v0;
        for(int i=0 ; i<m ; i++){
            cin>>M[i];
            v0.push_back(M[i]);
        }
        for(int i=0 ; i<n ; i++){
            cin>>N[i];
            v0.push_back(N[i]);
        }
        sort(v0.begin(), v0.end());
        for(int x: v0){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

int main(){
    dost();
    return 0;
}