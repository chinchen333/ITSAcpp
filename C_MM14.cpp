#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//計算時間的組合
int main(){
    int in,min,hour,day;
    while (cin>>in){
        min=in/60;      //先計算出分鐘
        in%=60;         //剩餘的為秒
        hour=min/60;    //再計算出小時
        min%=60;        //剩餘的為分鐘
        day=hour/24;    //再計算出天
        hour%=24;       //剩餘的為小時
        cout<<day<<" "<<"days"<<endl<<hour<<" "<<"hours"<<endl<<min<<" "<<"minutes"<<endl<<in<<" "<<"seconds"<<endl;
    }
}