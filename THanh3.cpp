#include<iostream>
#include<string>

using namespace std;
int a[1007], l[1007], i , j , n , maxx;

void Dost()
{
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++){
        l[i] = 1;
    }    
    maxx = 0;
    for(int i=0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            if( a[j] > a[i] && ( l[j] <l[i]+1) ){
                l[j] = l[i]+1;
            }
            if(maxx <l[j])  maxx = l[j];
        }
    }
    cout<<maxx;
}

int main(){
    // freopen("PTIT.in","r",stdin);
    // freopen("PTIT.out","w",stdout);

    int test;
    cin>>test;
    while(test--){
        Dost();
        cout<<endl;
    }

    return 0;
}