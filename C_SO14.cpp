#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int list[5];
    while (cin>>list[0]>>list[1]>>list[2]>>list[3]>>list[4]){
        if(list[0]==0&&list[1]==0&&list[2]==0&&list[3]==0&&list[4]==0){
            break;  //0 0 0 0 0結束
        }else{
            sort(list,list+5);//排序
            cout<<list[2]<<endl;//輸出中位數
        }
    }
}