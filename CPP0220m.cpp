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
            for(int j=0 ; j<n ; j++){
                if(i == 0 || i == n-1 || j==0 || j == n-1){
                    cout<<arr0[i][j]<<" ";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}

int main(){
    dost();
    return 0;
}