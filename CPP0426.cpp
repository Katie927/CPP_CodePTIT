#include<iostream>
#include<algorithm>
#define MAX_ARR_SIZE 1007

using namespace std;

void sapXep(int arr[] , int n){
    int t = 0;
    for(int i=1; t<n/2 ; i+=2){
        int temp = arr[n-1];
        for(int j=n-1 ; j>i ; j--){
            swap(arr[j], arr[j-1]);
        }
        t++;
        arr[i] = temp;
    }
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr0[MAX_ARR_SIZE];
        for(int i=0 ; i<n ; i++){
            cin>>arr0[i];
        }
        sort(arr0, arr0 + n);
        reverse(arr0, arr0 + n);
        sapXep(arr0 , n);
        for(int i=0 ; i<n ; i++){
            cout<<arr0[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    // freopen("PTIT.in","r",stdin);
    // freopen("PTIT.out","w",stdout);

    Dost();
    return 0;
}