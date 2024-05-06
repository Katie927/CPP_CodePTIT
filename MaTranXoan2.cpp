#include<iostream>
#include<vector>

using namespace std;

void InVector(vector<vector<int>> &vec , int row , int col){
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cin>> vec.at(i).at(j);
        }
    }
}
void OutVector(vector<int> vec){
    for(int i=vec.size()-1 ; i>=0 ; i--){
        cout<<vec[i]<<" ";
    }
    // cout<<endl<<vec.size();
    cout<<endl;
}

void OutVector2(std::vector<std::vector<int>> arr)
{
	int rows = arr.size();
	int columns = arr.at(0).size();
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			cout <<arr.at(i).at(j) <<" ";
		}
		cout << endl;
	}
}	

void XoanOc(vector<vector<int>> &vec , int row , int col){
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

  //  cout<<v1.size();
  //  OutVector2(vec);

    OutVector(v1);
}

void dost(){
    int test;
    cin>>test;
    while(test--){
        vector<vector<int>> v00;
        int row, col;
        cin>>row>>col;
        v00.resize(row);
        for(int i=0 ; i<row ; i++){
            v00.at(i).resize(col);
        }
        InVector(v00 , row , col);
        XoanOc(v00 , row , col);
    }
}

int main(){
    dost();
    return 0;
}