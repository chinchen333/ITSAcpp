#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
//計算ASCII字元
using namespace std;
int main(){
    string str;
    int num[129]={0};   //ascii碼 i的值有num[i]個
    cin>>str;   //輸入字串
    for(string::iterator it=str.begin();it!=str.end();it++){    //迭代器
        num[*it]++;
    }
    for(int i=127;i>32;i--){
        if(num[i]!=0)cout<<i<<" "<<num[i]<<endl;//如果此字元出現過則輸出其出現次數
    }
}