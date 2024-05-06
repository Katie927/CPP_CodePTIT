#include<iostream>

using namespace std;

void dost(){
    int n,m,p;
    cin>>n>>m>>p;
    int arr1[n][m];
    int arr2[m][p];
    int arr0[n][p] = {};
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<p ; j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<p ; j++){
            for(int k=0 ; k<m ; k++){
                arr0[i][j] += arr1[i][k] * arr2[k][j];
            }
            cout<<arr0[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    dost();
    return 0;
}