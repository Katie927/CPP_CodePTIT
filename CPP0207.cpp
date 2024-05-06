#include<iostream>
#define MAX_ARR_SIZE 1000007

using namespace std;

void dost(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int arr[MAX_ARR_SIZE];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        int l=0;
        for(int i=0 ; i<n ; i++){
            if(i < n-d){
                cout<<arr[i+d]<<" ";
            }
            else{
                cout<<arr[l]<<" ";
                l++;
            }
        }
        cout<<endl;
    }
}

int main(){
    dost();
    return 0;
}