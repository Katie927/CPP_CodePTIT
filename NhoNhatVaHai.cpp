#include<iostream>
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
            s0.insert(A[i]);
        }
        if(s0.size() == 1)      cout<<"-1"<<endl;
        else{
            int t=0;
            for(int x : s0){
                cout<<x<<" ";
                t++;
                if(t == 2)  break;
            }
            cout<<endl;
        }
    }
}

int main(){
    dost();
    return 0;
}