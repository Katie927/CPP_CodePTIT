#include<iostream>
#include<algorithm>

#define MAX_ARR_SIZE 101

using namespace std;

void Dost(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[MAX_ARR_SIZE];
        int k;
        cin>>k;
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        int dem = 0;
        for(int i=0 ; i<n-1 ; i++){
            int t = k - arr[i];
            for(int j = i+1 ; j<n ; j++){
                if(arr[j] == t)     dem++;
            }
        }
        cout<<dem<<endl;
    }
}

int main(){
    Dost();
    return 0;
}