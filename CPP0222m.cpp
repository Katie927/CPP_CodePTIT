#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int x;
        int s = 0;
        int n;
        cin>>n;
        vector <int> vec;
        for(int i=0 ; i<n ; i++){
            set <int> st;
            for(int j=0 ; j<n ; j++){
                cin>>x;
                st.insert(x);
            }
            for(int k:st){
                vec.push_back(k);
            }
        }
        sort(vec.begin() , vec.end());
        for(int i=0 ; i<vec.size() ; i++){
            int k=1;
            while(vec[i] == vec[i+1]){
                k++;
                i++;
            }
            if(k == n)      s++;
        }
        cout<<s<<endl;
    }
}

int main(){
    // freopen("PTIT.in","r",stdin);
    // freopen("PTIT.out","w",stdout);

    Dost();
    return 0;
}