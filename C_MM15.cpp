#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//判斷座標是否在正方形的範圍內
int main(){
    int x,y;
    while (cin>>x>>y){
        if(x>100||y>100){          //如果xy其中大於100則此點在範圍外
            cout<<"outside"<<endl;
        }else cout<<"inside"<<endl; //在範圍內
    }
}