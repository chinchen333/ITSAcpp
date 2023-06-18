#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//購票計算
int main(){
    int a;
    int i;
    while (cin>>a){
        for (i=1;a>=10;i++){    //先計算10元數量,扣到小於10元跳出
            a-=10;
        }
        cout<<"NT10="<<i-1<<endl;
        for (i=1;a>=5;i++){     //再計算5元數量,扣到小於5元跳出
            a-=5;
        }
        cout<<"NT5="<<i-1<<endl;
        cout<<"NT1="<<a<<endl;   //剩餘則都1塊
    }
}