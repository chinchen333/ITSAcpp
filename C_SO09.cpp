#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
//字串重排
int main(){
    string a;
    while (cin>>a){
        sort(a.begin(),a.end(),greater<int>());    //將字串排序
        cout<<a<<endl;              //輸出排序後的字串
    }
}