#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#define MAX_ARR_SIZE 10007

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        set<int> Union;
        int arr1[MAX_ARR_SIZE];
        int m;
        cin>>m;
        int arr2[MAX_ARR_SIZE];
        for(int i=0 ; i<n ; i++){
            cin>>arr1[i];
            Union.insert(arr1[i]);
        }
        for(int i=0 ; i<m ; i++){
            cin>>arr2[i];
            Union.insert(arr2[i]);
        }
        for(int x:Union){
            cout<<x<<" ";
        }
        
    }
}

int main(){
    freopen("PTIT.in","r",stdin);
    freopen("PTIT.out","w",stdout);
    
    Dost();
    return 0;
}