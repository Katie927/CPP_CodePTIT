#include<iostream>
#include<set>
// #include<vector>
#include<algorithm>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int N[n];
        set<int> s0;
        for(int i=0 ; i<n ; i++){
            cin>>N[i];
            s0.insert(N[i]);
        }
        int z=0;
        int y= s0.size();
        int min, max;
        // cout<<s0.size();
        for(int x:s0){
            if(z == y-1)  max=x;
            else if(z == 0)     min=x;
            z++;
        }
        int u = max-min+1;
        cout<<u-y<<endl;
    }
}

int main(){
    dost();
    return 0;
}