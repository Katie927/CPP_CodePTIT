#include<iostream>

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        long long n;
        cin>>n;
        if(n == 0 || n == 1){
            cout<<"YES"<<endl;
        }
        else{
            long long n1 = 0;
            long long n2 = 1;
            long long n3 = 1;
            while(n3 < n){
                n3 = n1 + n2;
                n1 = n2;
                n2 = n3;
            }
            if(n == n3)         cout<<"YES"<<endl;
            else                cout<<"NO"<<endl;
        }
        
    }
}

int main(){
    Dost();
    return 0;
}