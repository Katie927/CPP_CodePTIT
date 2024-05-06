#include<iostream>

using namespace std;

void dost(){
    int t;
    cin>>t;
    while(t--){
        int a, m;
        cin>>a>>m;
        int x=-1;
        for(int i=0 ; i<=m-1 ; i++){
            if((a*i)%m == 1){
                x=i;
                break;
            }
        }
        cout<<x<<endl;
    }
}

int main(){
    dost();
    return 0;
}