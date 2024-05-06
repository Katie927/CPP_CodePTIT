#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// void quickSort(int a[], int left, int right){
//     int i = left, j = right;
//     int tg = a[(left + right) / 2];
//     // Phân chia dãy 
//     while(i <= j){
//         while(a[i] < tg) i++;
//         while(a[j] > tg) j--;
//         if(i <= j){
//             swap(a[i], a[j]);
//             i++;
//             j--;
//         }
//     } 
//     // Gọi đệ quy sắp xếp hai đoạn nửa
//     if(left < j) quickSort(a, left, j);
//     if(i < right) quickSort(a, i, right);
// }

void dost(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        long long A[n];
        vector<long long> vA;
        long long B[m];
        vector<long long> vB;
        for(int i=0 ; i<n ; i++){
            cin>>A[i];
            vA.push_back(A[i]);
        }
        for(int i=0 ; i<m ; i++){
            cin>>B[i];
            vB.push_back(B[i]);
        }
        sort(vA.begin(), vA.end());
        sort(vB.begin(), vB.end());
        auto kq=vA[vA.size()-1] * vB[0];
        cout<<kq<<endl;
    }
}

int main(){
    dost();
    return 0;
}

// while(test--){
//         int n,m;
//         cin>>n>>m;
//         int A[n];
//         int B[m];
//         for(int i=0 ; i<n ; i++){
//             cin>>A[i];
//         }
//         quickSort(A, 0, n-1);
//         for(int i=0 ; i<m ; i++){
//             cin>>B[i];
//         }
//         quickSort(B, 0, m-1);
//         cout<<A[0]*B[m-1]<<endl;

//     }