#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//計算薪水
int main(){
    double a,b;
    double remain;
    cout.setf(ios::fixed);
    while (cin>>a>>b){
        if(a>120){          //如果超過120個小時
            remain=a-120.0; //計算-120後的時數
            cout<<fixed<<setprecision(1)<<60.0*b+60.0*1.33*b+remain*b*1.66<<endl;
        }else if(a>60){     //如果介於60到120個小時
            remain=a-60;    //計算-60後的時數
            cout<<fixed<<setprecision(1)<<60*b+remain*b*1.33<<endl;    
        }else{
            cout<<fixed<<setprecision(1)<<a*b<<endl;//直接輸出工時*薪資        
            }
    }
}