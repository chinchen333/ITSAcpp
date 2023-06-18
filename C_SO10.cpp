#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
int main(){
    int num;
    int list[1000];
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>list[i];       //輸入數字
    }
    int small=0,tem;
    for(int i=0;i<num;i++){     //選擇排序
        small=i;                //設定最小為自己
        for(int j=i+1;j<num;j++){
            if (list[j]<list[small]) small=j;//找出最小
        }
        if(small!=i){       //進行交換
            tem=list[i];
            list[i]=list[small];
            list[small]=tem;
        }
    }
    for(int i=0;i<num;i++){
        cout<<list[i];   //輸出結果
        if(num-1==i)cout<<endl;
        else cout<<" ";
    }
}