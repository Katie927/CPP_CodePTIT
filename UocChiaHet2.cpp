#include<iostream>
#include<math.h>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test --){
        int n;
        cin>>n;
        int dem=0;
        int k = (int)sqrt(n);
        for(int i=1 ; i<= k ; i++){
            if( n%i == 0 ){
                if(i%2 == 0){
                    dem++;
                }
                if( (n/i)%2 == 0 ){
                    dem++;
                    if(i*i==n && i%2==0) dem--;
                }
            } 
        }
        cout<<dem<<endl;
    }
}

int main(){
 dost();
 return 0;
}