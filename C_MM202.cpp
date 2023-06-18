#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    float a;
    cout.setf(ios::fixed);
    while (cin>>a){
        cout<<fixed<<setprecision(2)<<a*20000/198<<endl;  //輸出算式結果
    }
}