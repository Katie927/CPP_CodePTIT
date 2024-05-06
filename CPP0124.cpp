#include<iostream>
#include<math.h>

using namespace std;

void dost(){
    int test;
    cin>>test;
    for(int i=1 ; i<=test; i++){
        long long n;
        cin >> n;
        int dem;
        for(long long i = 2; i <= n; i++){
            dem = 0;
            while(n % i == 0){
                ++dem;
                n /= i;
            }
            if(dem>0){
                cout << i << " " << dem << endl;
            }
        }
    }
}

int main(){
    dost();
    return 0;
}

// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;
// void ff(long long n, vector<long long>&factor,vector<long long>&power)
// {
//     for (long long i=2;i*i<=n;i++)
//     {
//         if (n%i==0)
//         {
//             factor.push_back(i);
//             long long p;
//             for (p=0;n%i==0;p++)
//                 n=n/i;
//             power.push_back(p);
//         }
//     }
//     if (n>1)
//     {
//         factor.push_back(n);
//         power.push_back(1);
//     }
// }
// int main()
// {
//     long long n;
//     vector<long long>a,b;
//     cin>>n;
//     ff(n,a,b);
//     for (int i=0;i<a.size();i++)
//     cout<<a[i]<<" "<<b[i]<<endl;
// //    system("pause");
//     return 0;
// }