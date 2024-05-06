#include<iostream>
#define MAX_ARR_SIZE 10000007

using namespace std;

void dost(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[MAX_ARR_SIZE];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        int max=arr[1];
        for(int i=0 ; i<n ; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        cout<<max<<endl;
    }
}

int main(){
    dost();
    return 0;
}