#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
int fun(int n){
    if(n==0)return 1;               
    else if(n==1)return 2;
    else return fun(n-1)+fun(n/2);
}
int main(){
    int in;
    cin>>in;
    cout<<fun(in)<<endl; //輸出遞迴結果
}