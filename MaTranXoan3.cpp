#include<iostream>
#include<vector>

using namespace std;

void InVector( vector<vector<int>> &vec , int row , int col){
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cin>>vec.at(i).at(j);
        }
    }
}

void XoanOc(vector<vector<int>> &vec , int row , int col , int pos){
    vector<int> v1;
    int d = 0;
    int gt = 1;
    int hang = row - 1;
    int cot = col - 1;
    while(gt <= row*col){
        for(int i=d ; i<=cot ; i++){
            v1.push_back(vec.at(d).at(i));
            gt++;
        }
        for(int i = d+1 ; i<=hang ; i++){
            v1.push_back(vec.at(i).at(cot));
            gt++;
        }
        for(int i = cot-1 ; i>=d && gt<=row*col ; i--){
            v1.push_back(vec.at(hang).at(i));
            gt++;
        }
        for(int i = hang-1 ; i>d && gt<= row*col ; i--){
            v1.push_back(vec.at(i).at(d));
            gt++;
        }
        d++;
        hang--; cot--;
    }
    cout<<v1[pos - 1]<<endl;
  //  cout<<v1.size();
  //  OutVector2(vec);

   // OutVector(v1);
}

void dost(){
    int test;
    cin>>test;
    while(test--){
        int row, col;
        int k;
        cin>>row>>col;
        cin>>k;
        vector<vector<int>> v00;
        v00.resize( row );
        for(int i=0 ; i<row ; i++){
            v00.at(i).resize(col);
        }
        InVector(v00 , row , col);
        XoanOc(v00 , row , col , k);
    }
}

int main(){
    dost();
    return 0;
}