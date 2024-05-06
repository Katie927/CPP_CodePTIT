#include<iostream>
#include<vector>
#define MAX_ARR_SIZE 1007

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[MAX_ARR_SIZE];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        int maxx = -1;
        for(int i=0 ; i<n-1 ; i++){
            for(int j=i+1 ; j<n ; j++){
                if(arr[j] - arr[i] > maxx)  maxx = arr[j] - arr[i];
            }
        }
        cout<<maxx<<endl;
    }
}

int main(){
    // freopen("PTIT.in","r",stdin);
    // freopen("PTIT.out","w",stdout);

    Dost();
    return 0;
}