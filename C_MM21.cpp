#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//算階乘
int main(){
    long long ans=1;
    int a;
    while (cin>>a){
        ans=1;
        for(int i=1;i<=a;i++){
            ans*=i;     //聰1乘到輸入的數算出乘階
        }
        cout<<ans<<endl;//輸出結果
    }
}