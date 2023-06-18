#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//十進制轉二進制
int main(){
    int dec,ind=0,check=0;
    int bin[8]={0};
    while (cin>>dec){
        if(dec<0){      //如果輸入的數為負
            check=1;    
            dec*=-1;    //先轉正
            dec-=1;     //再減1
        }
        ind=0;
        while (dec>0){
            bin[ind]=dec%2; //如果餘1此位為1
            ind++;          //進入下一位
            dec/=2;         //原數除2
        }
        if(check){    //如果為負數
            for(int i=7;i>=0;i--){
                if(bin[i]==0)cout<<"1";   //如果為負責將結果相反輸出陣列
                else cout<<"0";
                bin[i]=0;
            }
        }else{
            for(int i=7;i>=0;i--){  
                cout<<bin[i];    //輸出結果
                bin[i]=0;
            }
        }
        cout<<endl;
    }
}