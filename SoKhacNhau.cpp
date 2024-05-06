#include<iostream>
#include<map>

using namespace std;

void Dost()
{
    freopen("PTIT.in","r",stdin);
    int n;
    map <int, int> m;
    while(cin>>n){
        m[n]++;
    }
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }

}

int main(){
    Dost();
    return 0;
}