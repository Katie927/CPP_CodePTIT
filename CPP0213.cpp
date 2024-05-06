#include<iostream>
#include<vector>
#define MAX_ARR_SIZE 107

using namespace std;

long long fibo[MAX_ARR_SIZE];
int i = 2;
void _Fibo(){
    fibo[0] = 0;
    fibo[1] = 1;
    fibo[i] = fibo[i-2] + fibo[i-1];
    i++;
    if(i<MAX_ARR_SIZE)          _Fibo();
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[MAX_ARR_SIZE];
        vector <long long> vec;
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            for(int j=0 ; j<MAX_ARR_SIZE ; j++){
                if(arr[i] == fibo[j]){
                    vec.push_back(arr[i]);
                    break;
                }
            }
        }
        for(int i=0 ; i<vec.size() ; i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    // freopen("PTIT.in","r",stdin);
    // freopen("PTIT.out","w",stdout);

    _Fibo();
    Dost();
    return 0;
}