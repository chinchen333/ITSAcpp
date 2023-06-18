#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//計算正整數被3整除之數值之總和
int main(){
    int a,in;
    int arr[10000];
    arr[0]=0;
    for(int i=1;i<10000;i++){   //先建表
        arr[i]=arr[i-1]+i*3;    //前項加上新增加的三的倍數
    }
    while (cin>>a){
        in=a/3;     //除3取整數
        cout<<arr[in]<<endl; //輸出表的內容
    }
}