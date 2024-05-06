#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

void Dost(){
    int n;
    cin>>n;
    int arr[n], arr1[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        arr1[i] = arr[i]; 
    }
    sort(arr, arr+n);
    for(int i=0 ; i<n ; i++){
        auto it = lower_bound(arr, arr+n, arr1[i]);
        if(it == arr){
            cout<<"# ";
        }
        else{
            --it;
            cout<<*it<<" ";
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    Dost();
    return 0;
}
