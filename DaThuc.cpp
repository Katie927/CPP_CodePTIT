#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
#include<set>
#include<fstream>
#include<vector>
#include<limits.h>
#include<map>

using namespace std;

void dost(){
    long long k = 1000000007;
    int test;
    cin>>test;
    while(test--){
        int n;
        int x;
        cin>>n>>x;
        long long arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        long long sum = 0;
        long long tmp = 1;
        for(int i = n-1 ; i>=0 ; i--){
            sum += arr[i]* tmp;
            sum %= k;
            tmp *= x;
            tmp %= k;
        }
        cout<<sum<<endl;
    }
}

int main(){
    dost();
    return 0;
}