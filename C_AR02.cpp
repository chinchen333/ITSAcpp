#include <iostream>
#include <string.h>
#include <vector>
//一維陣列反轉 II
using namespace std;
int main(){
    vector<int>arr;
    int ind=0;
    for(int i=0;i<6;i++){   
        int tmp;
        cin>>tmp;
        arr.push_back(tmp); //輸入陣列
    }
    for(vector<int>::iterator it=arr.end()-1;it>=arr.begin();it--){ //反轉
        cout<<*it;  //輸出
        if(it!=arr.begin())cout<<" "; //空格
        else cout<<endl; //換行
    }
}