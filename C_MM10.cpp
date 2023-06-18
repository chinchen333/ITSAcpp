#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//攝氏溫度轉華式溫度
int main(){
    double a;
    int temp;
    cout.setf(ios::fixed); //設定輸出格式
    while (cin>>a){
        a=round((a*9/5+32)*10)/10;//轉為華氏後四捨五入
        cout<<fixed<<setprecision(1)<<a<<endl;   //輸出結果

    }
}