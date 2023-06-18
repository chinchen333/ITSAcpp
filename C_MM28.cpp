#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//計算1到N之間屬於5和7的倍數
int main(){
    int a,in;
    int arr[10000];
    arr[0]=0;
    for(int i=1;i<10000;i++){   //建表
        arr[i]=arr[i-1]+35;     //前項加35
    }
    while (cin>>a){
        in=a/35;                //算出為35的幾倍
        for(int i=1;i<=in;i++){
            cout<<arr[i];//連續輸出表中對應的數
            if(i!=in)cout<<" ";
        }
        cout<<endl;
    }
}