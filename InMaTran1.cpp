#include<iostream>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr0[n][n];
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                cin>>arr0[i][j];
            }
        }
        for(int i=0 ; i<n ; i++){
            if(i%2 == 0){
                for(int j=0 ; j<n ; j++)    cout<<arr0[i][j]<<" ";
            }
            else{
                for(int j=n-1 ; j>=0 ; j--)    cout<<arr0[i][j]<<" ";
            }
            // cout<<endl;
        }
        cout<<endl;
    }
}

int main(){
    dost();
    return 0;
}