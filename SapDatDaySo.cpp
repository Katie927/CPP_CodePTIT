#include<iostream>
//#include<set>
//#include<vector>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        long long N[n];
        //vector<int> v0;
        for(int i=0 ; i<n ; i++){
            cin>>N[i];
            //v0.push_back(N[i]);
        }
        for(int i=0 ; i<n ; i++){
            int check=0;
            for(int j=0 ; j<n ; j++){
                if(i == N[j]){
                    check=1;
                    break;
                }
            }
            if(check == 0){
                cout<<"-1 ";
            }
            else{
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    dost();
    return 0;
}