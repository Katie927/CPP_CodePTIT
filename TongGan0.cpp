#include<iostream>
#include<math.h>
#include<limits.h>

#define MAX_ARR_SIZE 1001

using namespace std;

void Dost(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[MAX_ARR_SIZE];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        int min = INT_MAX;
        int min0;
        for(int i=0 ; i<n-1 ; i++){
            for(int j=i+1 ; j<n ; j++){
                if( abs(arr[i] + arr[j]) <min ){
                    min = abs(arr[i] + arr[j]);
                    min0 = arr[i] + arr[j];
                }
            }
        }
        cout<<min0<<endl;
    }
}

int main(){
    Dost();
    return 0;
}