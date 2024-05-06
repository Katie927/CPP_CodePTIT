#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

void Dost()
{ 
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        long long arr;
        long long sum = 0;
        long long maxx = 0;
        long long k = -1e9;
        for(int i=0 ; i<n ; i++){
            cin>>arr;
            sum += arr;
            if(sum < 0)       sum = 0;
            k = max(arr , k);
            maxx = max(maxx , sum);
        }
        if( maxx == 0 )  maxx = k;
        cout<<maxx<<endl;
    }
}

int main(){
    //Dost();
    freopen("PTIT.out","w",stdout);
    for(int i=1 ; i<1000 ; i++)        cout<<i<<endl;
    return 0;
}


