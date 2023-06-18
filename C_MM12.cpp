#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//相遇時間計算
int main(){
    int a;
    while (cin>>a){
        cout<<(int)(a/0.238+1)<<endl;    //相遇時間=距離/相差數率
    }
}