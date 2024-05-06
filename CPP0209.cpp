#include<iostream>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n, t;
        cin>>n>>t;
        int arr0[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr0[i];
        }
        for(int i=0 ; i<t ; i++){
            int sum=0;
            int left, right;
            cin>>left>>right;
            for(int i=left-1 ; i<=right-1 ; i++){
                sum += arr0[i];
            }
            cout<<sum<<endl;
        }
    }
}

int main(){
    dost();
    return 0;
}