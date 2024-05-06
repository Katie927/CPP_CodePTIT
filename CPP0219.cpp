#include<iostream>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        int arr0[n][m];
        int arr1[n][m]  = {};
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                cin>>arr0[i][j];
                if(arr0[i][j] == 1){
                    for(int o=0 ; o<n ; o++){
                        arr1[o][j] = 1;
                    }
                }
                if(arr0[i][j] == 1){
                    for(int o=0 ; o<m ; o++){
                        arr1[i][o] = 1;
                    }
                }
            }
        }
        // for(int i=0 ; i<n ; i++){
        //     for(int j=0 ; j<m ; j++){
        //         if(arr0[i][j] == 1){
        //             for(int r=0 ; r<m ; r++){
        //                 arr1[r][j] = 1;
        //             }
        //             for(int r=0 ; r<n ; r++){
        //                 arr1[i][r] = 1;
        //             }
        //         }
        //     }
        // }
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                cout<<arr1[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){
    dost();
    return 0;
}