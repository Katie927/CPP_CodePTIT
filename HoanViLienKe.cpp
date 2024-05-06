#include<iostream>
#define MAX_ARR_SIZE 1001

using namespace std;

void swap(int &a , int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void Dost()
{
    int test;
    cin>>test;
    while (test--){
        int n;
        cin>>n;
        int arr[MAX_ARR_SIZE];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        for(int i = n-2 ; i>=0 ; i--){
            if(arr[i] > arr[i+1])   swap(arr[i] , arr[i+1]);
            break;
        }
        for(int i=0 ; i<n ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    Dost();
    return 0;
}