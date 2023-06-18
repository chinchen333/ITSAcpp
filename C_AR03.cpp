#include <iostream>
#include <string.h>
#include <vector>
//計算陣列中所有元素的立方和
using namespace std;
int main(){
    vector<int>arr;
    int ans=0;
    for(int i=0;i<6;i++){
        int tmp;
        cin>>tmp;       //輸入陣列內容
        arr.push_back(tmp);
    }
    for(vector<int>::iterator it=arr.begin();it!=arr.end();it++){
        ans+=(*it)*(*it)*(*it); //計算立方和
    }
    cout<<ans<<endl;    //輸出
}