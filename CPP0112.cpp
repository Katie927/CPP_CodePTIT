#include<iostream>
#include<math.h>

using namespace std;

void dost(){
    int t;
    cin>>t;
    while(t--){
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        double distance;
        distance=sqrt(pow(a-c, 2) + pow(b-d, 2));
        printf("%.4lf",distance);
        cout<<endl;
    }
}

int main(){
    dost();
    return 0;
}