/*************************************************************************
	> File Name: 185.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Sun 12 May 2024 03:37:01 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int fb(int n){
    if(n==1 || n==2)return 1;
    return fb(n-1)+fb(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fb(n)<<endl;
    return 0;
}
