#include<iostream>
#include<algorithm>

using namespace std;

void quickSort(int arr[], int left, int right){
    int i = left, j = right;
    int tg = arr[(left + right)/2];
    while(i <= j){
        while(arr[i] < tg)    i++;
        while(arr[j] > tg)    j--;
        if(i <= j){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }
    if(left < j) quickSort(arr, left, j);
    if(i < right) quickSort(arr, i, right);
}

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr0[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr0[i];
        }
        quickSort(arr0, 0, n-1);
        int mark = 0;
        int j=0;
        for(int i=0 ; i<n ; i++){
            if(mark == 0){
                mark = 1;
                cout<<arr0[n-1-j]<<" ";
            }
            else if(mark == 1){
                mark = 0;
                cout<<arr0[j]<<" ";
                j++;
            }
        }
        cout<<endl;
    }
}

int main(){
    dost();
    return 0;
}