#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void minn(string a, string b){
    for(int i=0 ; i<a.length() ; i++){
        if(a[i] == '6')       a[i] = '5';
    }
    for(int i=0 ; i<b.length() ; i++){
        if(b[i] == '6')       b[i] = '5';
    }
    long long c = stoll(a);
    long long d = stoll(b);
    cout<<c+d<<" ";
}
void maxx(string a, string b){
    for(int i=0 ; i<a.length() ; i++){
        if(a[i] == '5')       a[i] = '6';
    }
    for(int i=0 ; i<b.length() ; i++){
        if(b[i] == '5')       b[i] = '6';
    }
    long long d = stoll(b);
    long long c = stoll(a);
    cout<<c+d;
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        cin.ignore();
        string a;
        string b;
        cin>>a>>b;
        minn(a,b);
        maxx(a,b);
        cout<<endl;
    }
}

int main(){
    // freopen("PTIT.in","r",stdin);
    // freopen("PTIT.out","w",stdout);

    Dost();
    return 0;
}