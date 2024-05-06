#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
//#include<bits/stdc++.h>

using namespace std;

struct data_
{
    int x;
    int l;
    int xx;
};

bool cmp(data_ a, data_ b){
    if(a.xx == b.xx)    return a.l < b.l;
    else                return a.xx < b.xx;
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        vector<data_> vec(n);
        for(int i=0 ; i<n ; i++){
            cin>>vec[i].x;
            vec[i].l = i;
            vec[i].xx = abs(vec[i].x-k);
        }
        sort(vec.begin(), vec.end(), cmp);
        for(int i=0 ; i<n ; i++){
            cout<<vec[i].x;
        }
        cout<<endl;
    }
}

int main(){
    Dost();
    return 0;
}