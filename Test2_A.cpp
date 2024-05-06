#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX_ARR_SIZE 1000007

using namespace std;

bool Prime[MAX_ARR_SIZE] = {};
int g_count = 0;
int Prime_count[MAX_ARR_SIZE];
void is_Prime(){
    Prime[0] = true;
    Prime[1] = true;
    for(int i=2 ; i<MAX_ARR_SIZE ; i++){
        if( !Prime[i] ){ 
            for(int j= 2*i ; j<MAX_ARR_SIZE ; j+=i){
                Prime[j] = true;
            }
        }
    }
    for(int i=0 ; i<MAX_ARR_SIZE ; i++){
        if(!Prime[i]){
            g_count++;
        }
        Prime_count[i] = g_count;
    }
}

void Dost()
{
    is_Prime();
    int test;
    cin>>test;
    while(test--){
        int l,r;
        cin>>l>>r;
        int count = Prime_count[r] - Prime_count[l-1];
        cout<<count<<endl;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        freopen("PTIT.in","r",stdin);
        freopen("PTIT.out","w",stdout);
    
    Dost();
    return 0;
}
