#include<iostream>
#include<algorithm>
#include<math.h>

#define MAX_ARR_SIZE_ 1000001

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n, k;
        cin>>n>>k;
        int s = 0;
        int b = 0;
        int arr[MAX_ARR_SIZE_];
        for(int i = 0; i<n ; i++){
            cin>>arr[i];
            if (arr[i] <= k)     s++;
        }
        for(int i=0 ; i<s ; i++){
            if(arr[i] > k)    b++;
        }
        int ss = b;
        for(int i = 0, j=s ; j<n ; i++, j++){
            if(arr[i] > k)    b--;
            if(arr[j] > k)    b++;
            ss = min(ss, b);
        }
        cout<<ss<<endl;
    }
}

int main(){
    // freopen("PTIT.in","r",stdin);
    // freopen("PTIT.out","w",stdout);

    Dost();
    return 0;
}