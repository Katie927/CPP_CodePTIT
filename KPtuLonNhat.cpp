#include<iostream>

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
    int test;
    cin>>test;
    while(test--){
        int n;
        int x;
        cin>>n>>x;
        int A[n];
        for(int i=0 ; i<n ; i++){
            cin>>A[i];
        }
        quickSort(A , 0 , n-1);
        for(int i = n-1 ; i >n-1-x ; i--){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    dost();
    return 0;
}