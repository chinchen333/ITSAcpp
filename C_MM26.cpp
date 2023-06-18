#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//輸出 1*1、2*2、...、N*N之結果
int main(){
    int a,in;
    while (cin>>a){
        for(int i=1;i<=a;i++){      //進入迴圈
            cout<<i<<"*"<<i<<"="<<i*i<<endl;//直接輸出i*i
        }
    }
}