#include<iostream>
#include<string>
#include<set>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int A[n];
        set<int> s0;
        for(int i=0 ; i<n ; i++){
            cin>>A[i];
            while(A[i] > 0){
                int r=A[i] % 10;
                s0.insert(r);
                A[i] /= 10;
            }
        }
        for(int x: s0){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

int main(){
    dost();
    return 0;
}