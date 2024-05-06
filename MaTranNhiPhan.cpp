#include<iostream>

using namespace std;

void dost(){
    // int test;
    // cin>>test;
    // while(test--){
        int n;
        cin>>n;
        int arr0[n][3];
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<3 ; j++){
                cin>>arr0[i][j];
            }
        }
        int S=0;
        for(int i=0 ; i<n ; i++){
            int dem=0;
            for(int j=0 ; j<3 ; j++){
                if(arr0[i][j] == 1)     dem++;
            }
            if(dem>1)       S++;
        }
        cout<<S;
 //   }
}

int main(){
    dost();
    return 0;
}