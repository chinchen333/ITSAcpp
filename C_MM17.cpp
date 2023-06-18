#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//求最大公因數
int main(){
    int a,b;
    while (cin>>a>>b){
        while(a!=0&&b!=0){      //利用輾轉相除法
            if(a>=b){           //a>b則a=a%b
                a%=b;
            }else if(b>a){      //a<b則b=b%a
                b%=a;
            }
        }
        if(a>b)cout<<a<<endl;//輸出不為0的數
        else cout<<b<<endl;
    }
}