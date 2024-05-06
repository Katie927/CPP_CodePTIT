#include<iostream>
#include<algorithm>
#define MAX_ARR_SIZE 1000007

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        int k;
        cin>>n>>k;
        int arr0[MAX_ARR_SIZE];
        for(int i=0 ; i<n ; i++){
            cin>>arr0[i];
        }
        sort(arr0, arr0 + n);
        cout<<arr0[k-1]<<endl;
    }
}

int main(){
    Dost();
    return 0;
}