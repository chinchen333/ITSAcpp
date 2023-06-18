#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//計算數字相乘後末尾0的數量
int main(){
    long long ans=1,a;
    int outp=0;
    while (cin>>a){
        ans*=a;     //輸入相乘
    }
    while (ans%10==0){ //判斷是否還有10
        outp++;     
        ans/=10;        //除10後繼續
    }
    cout<<outp<<endl;
}