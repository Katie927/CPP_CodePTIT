#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

struct Point {
    double x;
    double y;
};

void input(Point &X){
    cin>>X.x;
    cin>>X.y;
}

double distance(Point A, Point B){
    double kc ;
    kc = sqrt(pow(B.x-A.x, 2) + pow(B.y-A.y, 2));
    return kc;
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}