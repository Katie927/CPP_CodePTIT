#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Dost()
{
    int n,m;
    cin>>n>>m;
    long long arr[n][m];
    long long hang[n+1][m+1] = {};
    long long cot[n+1][m+1] = {};
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j];
            hang[i+1][j+1] = arr[i][j] + hang[i+1][j];
            cot[i+1][j+1] = arr[i][j] + cot[i][j+1];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int x,h,a,b;
        cin>>x>>h>>a>>b;
        if(x == 1){
            cout<<hang[h][b] - hang[h][a-1]<<endl;
        }
        else{
            cout<<cot[b][h] - cot[a-1][h]<<endl;
        }
    }
    
    // for(int i=0 ; i<=n ; i++){
    //     for(int j=0 ; j<=m ; j++){
    //         cout<<cot[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<cot[7][6] - cot[3][6];
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    freopen("PTIT.in","r",stdin);
    freopen("PTIT.out","w",stdout);
    Dost();
    
    return 0;
}
