#include<iostream>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        int arr[MAX_ARR_SIZE][MAX_ARR_SIZE];
        int b[MAX_ARR_SIZE][MAX_ARR_SIZE] = {};
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                cin>>arr[i][j];
            }
        }
        for(int i=n-1;i>=n/2;i--){
			for(int j=n-i;j<=i;j++){
				b[n-i-1][j]=arr[n-i-1][j-1];
				b[i][j-1]=arr[i][j];
				b[j][i]=arr[j-1][i];
				b[j-1][n-i-1]=arr[j][n-i-1];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(b[i][j]==0) cout<<arr[i][j]<<" ";
				else cout<<b[i][j]<<" ";
			}
		}
		cout<<endl;
    }
}

int main(){
    // freopen("PTIT.in","r",stdin);
    // freopen("PTIT.out","w",stdout);

    Dost();
    return 0;
}