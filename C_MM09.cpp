#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//計算 i 次方的值
int main(){
    int in;
    int ans[32];
    ans[0]=1;
    for(int i=1;i<=31;i++){
        ans[i]=ans[i-1]<<1;//每次將前向左移bit乘二
    }
    while (cin>>in){
        if(in>31)cout<<"Value of more than 31"<<endl;
        else cout<<ans[in]<<endl;//輸出預先算好存在陣列的值
    }
}