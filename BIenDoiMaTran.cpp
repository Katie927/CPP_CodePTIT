#include<iostream>
#define MAX_ARR_SIZE 1007

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n][n];
        int b[n] = {};
        int c[n] = {};
        int s = 0, ss = 0;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                cin>>arr[i][j];
                b[i] += arr[i][j];
                c[j] += arr[i][j];
            }
        }
        for(int i=0 ; i<n ; i++){
            s = max( s , max(b[i] , c[i]) );
        }
        for(int i=0,j=0 ; i<n&&j<n ; ){
            int k = min(s-b[i] , s-c[j]);
            arr[i][j] += k;
            b[i] += k;
            c[j] += k;
            ss += k;
            if(b[i] == s)   i++;
            if(c[j] == s)   j++;
        }
        cout<<ss<<endl;

    }
}

int main(){
    Dost();
    return 0;
}