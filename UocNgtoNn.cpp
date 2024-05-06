#include<iostream>
#include<math.h>
#define MAX 10001

using namespace std;

bool Prime[MAX];
void isPrime(){
    for(int i=2 ; i<MAX ; i++){
        if(!Prime[i]){
            for(int j = 2*i ; j<MAX ; j+=i){
                Prime[j] = true;
            }
        }
    }
}

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        for(int i = 1 ; i<=n ; i++){
            if(i == 1)      cout<<"1 ";
            else if(!Prime[i])        cout<<i<<" ";
            else if(i %2 == 0)          cout<<"2 ";
            else {
                for(int j = 3 ; j<=sqrt(i) ; j++){
                    if( !Prime[j] && i%j == 0 )  {
                        cout<<j<<" ";
                        break;
                    }
                }
            }
        }
        cout<<endl;
    }
}

int main(){
    isPrime();
    dost();
    return 0;
}