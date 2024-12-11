/*************************************************************************
	> File Name: 38_1.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Sun 08 Dec 2024 03:48:23 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 100
long long arr[MAX_N+5]={0};
long long f(int n){
    if(n<=2)return n;
    if(arr[n])return arr[n];
    arr[n]=f(n-1)+f(n-2);
    return arr[n];
}
int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}
