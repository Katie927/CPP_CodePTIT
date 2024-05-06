#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
#include<set>
#include<fstream>
#include<vector>
#define MAX 1001

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        string s0;
        cin>>s0;
        int i=0;
        vector<int> v0;
        int kq = 0;
        while(i<s0.length()){
            int sum = 0;
            int dem = 0;
            int j = i;
            while(s0[j] >= '0' && s0[j]<='9'){
                sum = sum *10 +(s0[j] - '0');
                j++;
                dem ++;
            }
            if(sum > 0){
                v0.push_back(sum);
            }
            if(dem >0)      i+=dem;
            else            i+=1;
            
        }
        for(int i=0 ; i<v0.size() ; i++){
            kq += v0[i];
        }
        cout<<kq<<endl;
    }
}

int main(){
    dost();
    return 0;
}