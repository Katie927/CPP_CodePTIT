#include<iostream>
#include<string>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        cin.ignore();
        string str0;
        getline(cin, str0);
        int chan = 0;
        int le = 0;
        int dem=0;
        for(int i=0 ; i<=str0.length() ; i++){
            if(str0[i] == ' ' || str0[i] == '\0'){
                dem++;
                if(str0[i-1] % 2 == 0)   chan++;
                else if(str0[i-1] % 2 == 1)     le++;
            }
        }
        if((dem % 2 == 0 && chan > le) || (dem%2 == 1 && le>chan) ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
   //     cout<<dem<<" "<<chan<<" "<<le;
    }
}

int main(){
    dost();
    return 0;
}