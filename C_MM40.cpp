#include <iostream>
#include <string.h>
#include <vector>
#include <string.h>
#include <cmath>
#include <iomanip>
using namespace std;
//1~N之間的總和
int main(){
    int a,ans=0;
    while (cin>>a){
        for(int i=1;i<=a;i++){      //進行a次循環
            ans+=i;
            if(i!=a)cout<<i<<" + ";      //如果非結尾
            else cout<<i<<" = "<<ans;   //結尾
        }
        ans=0;
        cout<<endl;
    }
}