#include<iostream>

using namespace std;

// long long gcd(long long a,long long b)
// {	long long p=a*b;
// 	long long r=a%b;
// 	long long gcd;
// 	while(r!=0)
// 	{	a=b;
// 		b=r;
// 		r=a%b;
// 	}
// 	gcd=b;
// 	return gcd;
// }

long long gcd(long long a, long long b){
	long long ucln;
	if(a==0 || b==0){
		ucln=a+b;
	}
	else{
		while(a!=b){
			if(a>b)		a-=b;
			else		b-=a;
		}
		ucln = a;
	}
	return ucln;
}

long long lcm(long long a,long long b){
	return (a*b)/gcd(a,b);
}

void dost(){
    int test;
	cin>>test;
	while(test--){
		long long a;
		long long b;
		cin>>a>>b;
		cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
	}
}

int main(){
    dost();
    return 0;
}