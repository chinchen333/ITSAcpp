#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//英哩轉公里
int main(){
    double a;
    cout.setf(ios::fixed); //設定輸出格式
    while (cin>>a){
        a=round((a*1.6)*10)/10;//算出公里後進行四捨五入
        cout<<fixed<<setprecision(1)<<a<<endl;   //輸出結果
    }
}