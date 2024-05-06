#include<iostream>
#define MAX_ARR_SIZE 1000007

using namespace std;

void quickSort(int a[], int left, int right){
    int i = left, j = right;
    int tg = a[(left + right) / 2];
    // Phân chia dãy 
    while(i <= j){
        while(a[i] < tg) i++;
        while(a[j] > tg) j--;
        if(i <= j){
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    // Gọi đệ quy sắp xếp hai đoạn nửa
    if(left < j) quickSort(a, left, j);
    if(i < right) quickSort(a, i, right);
}

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
        quickSort(arr, 0 , n-1);
        if(arr[n-1] <= 0){
            cout<<"1"<<endl;
        }
        else{
            int check[1000000] = {0};
            for(int j=0 ; j<n ; j++){
                if(arr[j] > 0){
                    check[arr[j]] = 1;
                }
            }
            for(int i=1 ; i<1000000 ; i++){
                if(check[i] == 0){
                    cout<<i<<endl;
                    break;
                }
            }

        }
    }
}

int main(){
    dost();
    return 0;
}