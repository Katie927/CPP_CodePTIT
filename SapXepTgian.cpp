#include<iostream>
#define MAX_ARR_SIZE 5001
#define SWAP(type, x, y)do{type tmp = x; x=y ; y=tmp;}while(0)

using namespace std;

struct ThoiGian{
    int Hour;
    int Mins;
    int Secs;
    int Time;
};

void In(ThoiGian &tg){
    cin>>tg.Hour;
    cin>>tg.Mins;
    cin>>tg.Secs;
    tg.Time = tg.Hour*60*60 + tg.Mins*60 + tg.Secs;
}
void Out(ThoiGian tg){
    cout<<tg.Hour<<" ";
    cout<<tg.Mins<<" ";
    cout<<tg.Secs<<" ";
    cout<<endl;
}

void sap_xep( ThoiGian tg[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(tg[i].Time > tg[j].Time){
                SWAP (ThoiGian , tg[i] , tg[j]);
            }
        }
    }
}

void dost(){
    // freopen("PTIT.in","r",stdin);
    // freopen("PTIT.out","w",stdout);

    int n;
    cin>>n;
    ThoiGian tg[MAX_ARR_SIZE];
    for(int i=0 ; i<n ; i++){
        In( tg[i] );
    } 
    sap_xep(tg , n);
    for(int i=0 ; i<n ; i++){
        Out( tg[i] );
    }
}

int main(){
    dost();
    return 0;
}