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
        int check=0;
        int kq = -1;
        for(int i=0 ; i<n ; i++){
            cin>>A[i];
            s0.insert(A[i]);
            int l = s0.size();
            if(l != i+1 && check == 0){
                check = 1;
                kq = A[i];
            }
        }
        cout<<kq<<endl;
    }
}

int main(){
    dost();
    return 0;
}