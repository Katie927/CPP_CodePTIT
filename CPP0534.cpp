#include<iostream>
#include<string>
#include<sstream>

using namespace std;

bool tn(string s){
    for(int i=0 ; i<s.length()/2 ; i++){
        if(s[i] != s[s.length()-1-i])       return 0;
    }
    return 1;
}

void Dost()
{
    string s0;
    getline(cin, s0);
    
}

int main(){
    Dost();
    return 0;
}