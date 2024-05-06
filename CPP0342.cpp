#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        int i=0 ;
        int t = 0;
        while(s[i] >= '0' && s[i] <= '9'){
            t += s[i]-'0';
            s.erase(0,1);
        }
        cout<<s<<t<<endl;
    }
}

int main(){
    Dost();
    return 0;
}