#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
//計算正方形面積
using namespace std;
int main(){
    double a;
    cout.setf(ios::fixed);
    while (cin>>a){
        cout<<fixed<< setprecision(1) <<round(a*a*10)/10<<endl;     //輸出結果
    }
}