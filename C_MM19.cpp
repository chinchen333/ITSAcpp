#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//電話費計算
int main(){
    double a;
    cout.setf(ios::fixed); //設定輸出格式
    while (cin>>a){
        if(a<=800){
            cout<<fixed<<setprecision(1)<<a*0.9<<endl;    //如果800分以下只乘話費
        }else if(a<1500){
            cout<<fixed<<setprecision(1)<<a*0.9*0.9<<endl;//如果800到1500分乘話費再乘0.9
        }else{
            cout<<fixed<<setprecision(1)<<a*0.9*0.79<<endl;//如果1500分以上乘話費再乘0.79
        }
    }
}