#include<iostream>
#include<string>

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        int sum = 0;
        int temp = 0;
        for(int i=0 ; i<= s.length() ; i++){
            if(s[i] >= '0' && s[i] <='9'){
                temp = temp*10 + s[i]-'0';
            }
            else{
                sum += temp;
                temp = 0;
            }
        }
        cout<<sum<<endl;
    }
}

int main(){
    Dost();
    return 0;
}