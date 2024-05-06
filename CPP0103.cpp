#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double n;
    cin>>n;
    double sum=0;
    for(double i=1 ; i<=n ; i++){
        sum+=1.0/i;
    }
    printf("%.4lf",sum);
    return 0;
}