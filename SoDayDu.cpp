#include<iostream>
#include<string>
#include<set>

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        string s0;
        cin>>s0;
        set<char> st;
        bool check = true;
        if(s0[0] == '0'){
            cout<<"INVALID"<<endl;
        }
        else{
            for(int i=0 ; i<s0.length() ; i++){
                st.insert(s0[i]);
                if(s0[i] < '0' || s0[i] > '9'){
                    check = false;
                    break;
                }
            }
            if(check == true){
                if(st.size() == 10)        cout<<"YES"<<endl;
                else                       cout<<"NO"<<endl;
            }
            else{
                cout<<"INVALID"<<endl;
            }
        }

    }
}

int main(){
    Dost();
    return 0;
}