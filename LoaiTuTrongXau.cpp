#include<iostream>
#include<string>

using namespace std;

void dost(){
    string str0;
    getline(cin, str0);
    string str1;
    cin>>str1;
    int pos = str0.find(str1);
    str0.erase( str0.begin() + pos , str0.begin() + pos + str1.length());
    cout<<str0;
}

int main(){
    dost();
    return 0;
}