#include <iostream>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("PTIT.in","r",stdin);
        freopen("PTIT.out","w",stdout);
    #endif

    multiset<int> ms;
    int n;      cin>>n;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        ms.insert(x);
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        int y;
        cin>>x>>y;
        if(x == 1){
            ms.insert(y);
        }
        else if(x == 2){
            auto it = ms.find(y);
            if(it != ms.end()){
                ms.erase(it);
            }
        }
        else if(x == 3){
            if(ms.find(y) != ms.end()){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}


// void Them(int a, vector<int> &arr){
//     arr.insert(arr.begin() , a);
// }

// int Tim(int a, vector<int> &arr){
//     for(int i=0 ; i<arr.size() ; i++){
//         if(arr[i] == a) return i;
//     }
//     return -1;
// }

// void Xoa(int a, vector<int> &arr){
//     int p = Tim(a, arr);
//     if(p != -1)         arr.erase(arr.begin() + p);
// }

// void Dost(){
//     int n;
//     cin>>n;
//     vector<int> arr;
//     for(int i=0 ; i<n ; i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     int t;
//     cin>>t;
//     while(t--){
//         int q,a;
//         cin>>q>>a;
//         switch(q){
//             case 1: Them(a, arr); break;
//             case 2: Xoa(a, arr);  break;
//             case 3: {
//                 int m = Tim(a, arr);
//                 cout<<m<<endl;
//                 if(m == -1)     cout<<"NO"<<endl;
//                 else            cout<<"YES"<<endl;
//                 break;
//             }
//         }
//     }
// }

int main() {
    freopen("PTIT.in","r",stdin);
    freopen("PTIT.out","w",stdout);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    Dost();
    
    return 0;
}

