#include<iostream>

using namespace std;

void quickSort(int M[], int left , int right){
    int i=left;
    int j=right;
    int tg = M[(left+right)/2];
    while(i <= j){
        while(M[i] < tg)    i++;
        while(M[j] > tg)    j--;
        if(i <= j){
            swap(M[i], M[j]);
            i++;
            j--;
        }
    }
    if(left < j) quickSort(M, left, j);
    if(i < right) quickSort(M, i, right);
}

void dost(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        quickSort(arr, 0, n-1);
        cout<<arr[d-1]<<endl;
        // int temp=1;
        // for(int i=1 ; i<n ; i++){
        //     if(arr[i] > arr[i-1]){
        //         temp++;
        //         if(temp == d){
        //             cout<<arr[i]<<endl;
        //             break;
        //         }
        //     }
        // }
    }
}

int main(){
    dost();
    return 0;
}