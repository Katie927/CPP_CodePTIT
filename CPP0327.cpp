#include<iostream>
#include<string>

using namespace std;

int check(string str0){
    int tmp = 1;
    int sum = 0;
    for(int i = str0.length()-1 ; i>=0 ; i--){
        sum += (str0[i] - '0') * tmp;
        tmp *= 2;
        tmp %= 10;
        sum %= 10;
    }
    if(sum % 5 == 0)        return 1;
    else                    return 0;
}

void dost(){
    int test;
    cin>>test;
    while(test--){
        cin.ignore();
        string num0;
        cin>>num0;
        if(check(num0) == 1)        cout<<"Yes"<<endl;
        else                        cout<<"No"<<endl;
    }
}

int main(){
    dost();
    return 0;
}