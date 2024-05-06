#include<iostream>

using namespace std;

long long lcm(long long a, long long b){
    long long  m = a*b;
    while(a*b != 0){
        long long m = a%b;
        a = b;
        b = m;
    }
    return m/a;
}

// long long gcd(long long a, long long b){
// 	long long ucln;
// 	if(a==0 || b==0){
// 		ucln=a+b;
// 	}
// 	else{
// 		while(a!=b){
// 			if(a>b)		a-=b;
// 			else		b-=a;
// 		}
// 	}
//     ucln=a;
//     return ucln;
// }

long long gcd(long long a, long long b){
    while(a*b != 0){
        if(a > b){
            a %= b;
        }
        else{
            b %= a;
        }
    }
    return a+b;
}

// long long gcd(long long a, long long b) {
//     if (b == 0) return a;
//     return gcd(b, a % b);
// }

long long lcm(long long a, long long b){
    long long bcnn = (a*b)/gcd(a,b);
    return bcnn;
}

void dost(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<lcm(a,b)<<" "<<gcd(a,b)<<endl;
    }
}

int main(){
    dost();
    return 0;
}

