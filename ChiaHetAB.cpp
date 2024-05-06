#include<iostream>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int m,n;
        cin>>m>>n;
        if(m > n){
            int tmp = m;
            m=n;
            n=tmp;
        }
        int a,b;
        cin>>a>>b;
        int dem = 0;
        for(int i = m ; i<=n ; i++){
            if(i % a == 0 || i%b == 0)   dem++;
        }
        cout<<dem<<endl;
    }
}

int main(){
    dost();
    return 0;
}