#include<iostream>
#define MAX 100

using namespace std;

void InMaTran(int (*arr)[MAX] , int n , int m);

void XoanOc(int (*arr)[MAX] , int n, int m){
    int d = 0;        int gt = 1;
    int hang = n - 1;
    int cot = m - 1;
    while(gt <= n*m){
        for(int i=d ; i<=cot ; i++){
            cout<< arr[d][i]<< " ";
            gt++;
        }
        for(int i = d+1 ; i<=hang ; i++){
            cout<<arr[i][cot]<< " "; 
            gt++;
        }
        for(int i = cot-1 ; i>=d && gt<=m*n ; i--){
            cout<< arr[hang][i] <<" ";
            gt++;
        }
        for(int i = hang-1 ; i>d && gt<=n*m ; i--){
            cout<< arr[i][d] << " ";
            gt++;
        }
        d++;
        hang--; cot--;
    }
}

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        int A[MAX][MAX];
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                cin>>A[i][j];
            }
        }
        XoanOc(A , n , m);
        cout<<endl;
    }
}

int main(){
    dost();
    return 0;
}

void InMaTran(int arr[][MAX] , int n , int m){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}