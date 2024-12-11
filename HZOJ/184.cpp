/*************************************************************************
	> File Name: 184.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Sun 12 May 2024 03:33:35 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int f(int n){
    if(n==1)return 1;
    return (f(n-1)+1)*2;
}
int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}
