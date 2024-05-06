#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int chia11(string str0){
    int sum = 0;
    int mark = 0;
    for(int i=0 ; i<str0.length() ; i++){
        if(mark == 0){
            mark = 1;
            sum += (str0[i] - '0'); 
        }
        else if( mark == 1){
            mark = 0;
            sum -= (str0[i] - '0');
        }
    }
    if(abs(sum) % 11 == 0)       return 1;
    else                    return 0;
    // return sum;
}

void dost(){
    int test;
    cin>>test;
    while(test--){
        cin.ignore();
        string num0;
        cin>>num0;
        if(chia11(num0) == 1)       cout<<"1"<<endl;
        else                        cout<<"0"<<endl;
        // cout<<chia11(num0);
    }

}

int main(){
    dost();
    return 0;
}