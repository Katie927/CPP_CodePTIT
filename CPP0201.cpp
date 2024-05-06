#include<iostream>
#include<math.h>
#define MAX_ARR_SIZE 100000+7

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
        int M[MAX_ARR_SIZE];
        for(int i=0 ; i<n ; i++){
            cin>>M[i];
        }
        quickSort(M,0,n-1);
        int min=abs(abs(M[1]) - abs(M[0]));
        for(int i=1 ; i<n ; i++){
            int k=abs(abs(M[i]) - abs(M[i-1]));
            if(k<min)       min=k;
        }
        cout<<min<<endl;
    }
}

int main(){
    dost();
    return 0;
}