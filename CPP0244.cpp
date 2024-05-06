#include<bits/stdc++.h> 
#include<set> 

using namespace std; 

int main(){ 
    int arr[1005],i,n; 
    cin>>n; 
    for(i = 0;i < n;i++) cin>>arr[i]; 
    set<int> s; 
    for(i = 0;i < n;i++) s.insert(arr[i]); 
    for(int x : s) cout<<x<<" "; 
    return 0; 
}