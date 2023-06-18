#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//十進位轉十六進位
int main(){
    int dec,check=0;
    int hex[8]={0};
    while (cin>>dec){
        int ind=0;
        while (dec>0){
            hex[ind]=dec%16;    //記錄除16後的餘數
            ind++;      //進入下一位
            dec/=16;
        }
        for(int i=ind-1;i>=0;i--){
            if(hex[i]>=10)cout<<(char)(hex[i]+55);   //如果此位大於等於10則加55以字元輸出
            else cout<<hex[i];       //其他輸出原陣列的數
        }
        cout<<endl;
    }
}