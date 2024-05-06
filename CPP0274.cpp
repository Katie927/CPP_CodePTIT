#include<iostream>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr0[n];
        int arr1[n] = {};
        int dem=0;
        for(int i=0 ; i<n ; i++){
            cin>>arr0[i];
        }
        for(int i=0 ; i<n-1 ; i++){
            if(arr1[i] == 0){
                arr1[i] = 1;
                for(int j=i+1 ; j<n ; j++){
                    if(arr0[i] == arr0[j]){
                        dem++;
                        arr1[j] = 1;
                        arr1[i]++;
                    }
                }
                if(arr1[i]>1)       dem++;
            }
        }
        cout<<dem<<endl;
    }
}

int main(){
    dost();
    return 0;
}
