#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
#include<set>
#include<fstream>
#include<vector>
#include<limits.h>
#define MAX 100001

using namespace std;

void dost(){
    ifstream input("PTIT.in", ios::in);
    fstream output;
    output.open("PTIT.out", ios::out);
    string c;
    while(!input.eof()){
        getline(input , c);
        output<<c<<endl;
    }
    input.close();
}

int main(){
    dost();
    return 0;
}