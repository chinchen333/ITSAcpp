#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//判斷座標是否在圓形的範圍內
int main(){
    int x,y;
    double r;
    while (cin>>x>>y){
        r=sqrt((x*x)+(y*y));    //算出點到原點的距離
        if(r>100){              //如過大於100則再圓外
            cout<<"outside"<<endl;
        }else cout<<"inside"<<endl; //在範圍內
    }
}