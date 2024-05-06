#include<iostream>
#include<string>

using namespace std;

int TongCs(string s){
    int sum = 0;
    for(int i=0 ; i<s.length() ; i++){
        sum += s[i] - '0';
    }
    if(sum <= 9)    return sum;
    return TongCs(to_string(sum));
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        if(TongCs(s) == 9)      cout<<"1"<<endl;
        else                    cout<<"0"<<endl;
    }
}

int main(){
    Dost();
    return 0;
}