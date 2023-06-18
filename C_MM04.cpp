#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
using namespace std;
//計算總和、乘積、差、商和餘數
int main(){
    int a,b,c,r;
    cin>>a>>b;  //輸入兩數
    cout<<a<<"+"<<b<<"="<<a+b<<endl;   //輸出相加
    cout<<a<<"*"<<b<<"="<<a*b<<endl;   //輸出相乘
    cout<<a<<"-"<<b<<"="<<a-b<<endl;   //輸出相減
    if(a<0)c=a/b-1;                 //如果被除數式負,商須再減一
    else c=a/b;
    r=(a%b+b)%b;        //轉換正餘數
    cout<<a<<"/"<<b<<"="<<c<<"..."<<r<<endl;//輸出相除
}