#include<iostream>
#include<math.h>

using namespace std;

void dost(){
    int t;
	cin>>t;
	while(t--){
		long long n,x,i;
		cin>>n;
		for(i=2;i<=sqrt(n);i++){
			while(n%i==0){
				x=i;
				n=n/i;
			}
		}
		if(n>1) x=n;
		// cout<<x<<endl;
        cout<<x<<endl;
	}
}

int main(){
    dost();
    return 0;
}