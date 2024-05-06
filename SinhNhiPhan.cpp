#include<iostream>

using namespace std;

void in(int ar[], int n){
    for(int i=0 ; i<n ; i++){
        cout<<ar[i];
    }
    cout<<" ";
}

void DeQuy(int k, int n, int x[]){
    for(int i=0 ; i<=1 ; i++){
        x[k] = i;
        if(k == n-1)      in(x, n);
        else            DeQuy(k + 1, n, x);
    }
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int x[21];
        DeQuy(0, n, x);
        cout<<endl;
    }
}

int main(){
    Dost();
    return 0;
}


// int N;
 
// int x[100];
 
// void in(int x[]){
//     for (int i = 1; i <= N; i++)
//         cout << x[i];
//     cout << "\t";
// }
 
// void deQuy(int i){
//     for (int j = 0; j <= 1; j++){
//         x[i] = j;
//         if (i == N)
//             in(x);
//         else
//             deQuy(i + 1);
        
//     }
// }
 
// int main(){
//     cin >> N;
//     deQuy(1);
// }