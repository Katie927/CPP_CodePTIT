#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 100

using namespace std;

void InMaTran(int (*arr)[MAX] , int n , int m){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void dost(){
    int n;
    cin>>n;
    int m=n;
    int A[n*n];
    int B[n][m];
    vector<int> v0;
    for(int i=0 ; i<n*n ; i++){
        cin>>A[i];
        v0.push_back(A[i]);
    }
    sort(v0.begin() , v0.end());
    
    int d = 0;        int gt = 1;
    int hang = n - 1;
    int cot = m - 1;
    while(gt <= n*n){
        for(int i=d ; i<=cot ; i++){
            B[d][i] = v0[gt-1];
            gt++;
        }
        for(int i = d+1 ; i<=hang ; i++){
            B[i][cot] = v0[gt-1]; 
            gt++;
        }
        for(int i = cot-1 ; i>=d && gt<=m*n ; i--){
            B[hang][i] = v0[gt-1];
            gt++;
        }
        for(int i = hang-1 ; i>d && gt<=n*m ; i--){
            B[i][d] = v0[gt-1];
            gt++;
        }
        d++;
        hang--; cot--;
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<std::vector<int>> s0;
    int arr0[7][8];

    //dost();
    return 0;
}