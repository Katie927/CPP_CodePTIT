#include<iostream>
#include<set>

using namespace std;

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int check = 1;
        int dem = 0;
        if(n<30){
            check = 0;
        }
        else{
            for(int i=2 ; i<=n ; i++){
                int t = 0;
                while(n % i == 0){
                    t++;        dem++;
                    n /= i;
                }
                if(t > 1 || dem >3){
                    check = 0;
                    break;
                }
            } 
            if(dem != 3)    check =0;
        }
        
        cout<<check<<endl;
    }
}

int main(){
    dost();
    return 0;
}