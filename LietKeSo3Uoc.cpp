#include<iostream>
#include<math.h>
#define MAX 1000001

using namespace std;

bool Prime[MAX];
void sangnt(){
    Prime[0]=true;
    Prime[1]=true;
    for(int i=2 ; i<MAX ; i++){
        if(!Prime[i]){
            for(int j=2*i ; j<MAX ; j+=i){
                Prime[j] = true;
            }
        }
    }
}

void dost(){
    int t;
    cin>>t;
    while(t--){
        long long n; long long m;
        cin>>n>>m;
        int dem=0;
        long long i=sqrt(n);
        while( i*i <= m){
            if(!Prime[i])   dem++;
            i++;
        }
        cout<<dem<<endl;
    }
}

int main(){
    sangnt();
    dost();
    return 0;
}