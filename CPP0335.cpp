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
        int max = 0;
        int t = 0;
        for(int i=0 ; i<=s.length() ; i++){
            if(s[i] <= '9' && s[i] >= '0'){
                t = t*10 + s[i]-'0';
                if(t>max){
                    max = t;
                }
            }
            else{
                t = 0;
            }
        }
        cout<<max<<endl;
    }
}

int main(){
    freopen("PTIT.in","r",stdin);
    freopen("PTIT.out","w",stdout);

    Dost();
    return 0;
}