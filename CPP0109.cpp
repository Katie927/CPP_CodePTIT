#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int chanle(int n){
    int check;
    int chan = 0;
    int le = 0;
    while(n>0){
        int r=n%10;
        if( r % 2 == 0 )        chan++;
        else                    le++;
        n/=10;
    }
    if(chan == le)  check=1;
    else            check=0;

    return check;
}

void dost(){
    int n;
    cin>>n;
    int j=0;
    for(int i=pow(10,n-1) ; i<pow(10,n) ; i++){
        if(chanle(i) == 1){
            cout<<i<<" ";
            j++;
        }
        if(j == 10){
            j=0;
            cout<<endl;
        }
    }
}

int main(){
    dost();
    return 0;
}