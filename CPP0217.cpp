#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

const int MAX_ARR_SIZE = 10e3+7;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        int k;
        cin>>n>>k;
        int arr[MAX_ARR_SIZE];
        for(int i=0 ; i<(n*n) ; i++){
            cin>>arr[i];
        }
        sort(arr, arr+(n*n));
        cout<<arr[k-1]<<endl;
    }
}

int main(){
    //     freopen("PTIT.in","r",stdin);
    // freopen("PTIT.out","w",stdout);
    Dost();
    return 0;
}