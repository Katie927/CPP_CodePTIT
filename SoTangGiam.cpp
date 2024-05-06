#include<iostream>
#include<string>
#include<limits.h>
#include<math.h>
// #define MAX 1000000001

using namespace std;

// bool Prime[MAX];
// void isPrime()  {
//     Prime[0] = true;
//     Prime[1] = true;
//     for(int i=0 ; i<MAX ; i++){
//         if( !Prime[i] ){
//             for(int j=i*2 ; j<MAX ; j+=i){
//                 Prime[j] = true;
//             }
//         }
//     }
// }

bool isPrime(int x) { 
    if (x<2) return false; 
    for (int i=2; i<=sqrt(x); i++) {
        if (x%i==0) { 
            return false; 
            break; 
        } 
    } 
    return true; 
}

bool inc(int n){
    int tmp = n;
    int r0 = n%10;
    tmp /= 10;
    while(tmp > 0){
        int r = tmp %10;
        if(r<=r0)    return false;
        tmp /= 10;
        r0 = r;
    }
    return true;
}
bool dec(int n){
    int tmp = n;
    int r0 = n%10;
    tmp /= 10;
    while(tmp > 0){
        int r = tmp %10;
        if(r>=r0)    return false;
        tmp /= 10;
        r0 = r;
    }
    return true;
}

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int dem = 0 ;
        int f = 1;
        int e = 1;
        int i = 0;
        while(i<n){
            f *= 10;
            e *= 10;
            if(i == n-1)    f /=10;
            i++;
        }
        i = f +1;
        while( i<e ){
            if( inc(i) || dec(i) ){
                if( isPrime(i) ){
                    dem++;
                }
            }
            i += 2;
        }
        cout<<dem<<endl;
    }
}

int main(){
    dost();
    return 0;
}