#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

void dost(){
    string de101 = "101 A B B A D C C A B D C C A B D";
    string de102 = "102 A C C A B C D D B B C D D B B";
    int l=de101.length();
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string bailam;
        getline( cin, bailam );
        double result=0;
        if( bailam[2] == '1' ){
            for(int i=4 ; i<l ; i+=2){
                if( bailam[i] == de101[i]){
                    result+=1;
                }
            }
        }
        else if( bailam[2] == '2' ){
            for(int i=4 ; i<l ; i+=2){
                if( bailam[i] == de102[i]){
                    result+=1;
                }
            }
        }
        double ketqua=result*1.0/1.5;
        cout<<fixed<<setprecision(2)<<ketqua<<endl;
    }
    
}

int main(){
    dost();
    return 0;
}