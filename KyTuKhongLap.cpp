#include<iostream>
#include<string>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        string s0;
        cin>>s0;
        int L=s0.length();
        int arr0[L] = {};
        for(int i=0 ; i<L ; i++){
            if(arr0[i] == 0){
                for(int j=i+1 ; j<L ; j++){
                    if(s0[i] == s0[j]){
                        arr0[i]++;
                        arr0[j]++;
                    }
                }
            }
        }
        for(int i=0 ; i<L ; i++){
            if(arr0[i] == 0){
                cout<<s0[i];
            }
        }
        cout<<endl;
    }
}

int main(){
    dost();
    return 0;
}