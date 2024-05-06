#include<iostream>
#include<math.h>

using namespace std;

int uoc(int n , int p){
    if( p > n )     return 0;
    else{
        int dem = 0;
        for(int i = 2 ; i<=n ; i++){
            int j = i;
            while(j%p == 0){
                dem++;
                j /= p;
            }
        }
        return dem;
    }
}

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n, p;
        cin>>n>>p;
        cout<<uoc(n,p)<<endl;
    }
}

int main(){
    dost();
    return 0;
}