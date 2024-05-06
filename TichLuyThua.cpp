#include<iostream>
#include<math.h>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        long long x, y, p;
        cin>>x>>y;
        cin>>p;
        long long mod = x%p;
        for(int i=1 ; i<y ; i++){
            mod = mod*x %p;
        }
        cout<<mod<<endl;
    }
}

int main(){
    dost();
    return 0;
}