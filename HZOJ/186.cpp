/*************************************************************************
	> File Name: 186.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Sun 12 May 2024 03:48:02 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int f(int i,int arr[],int n){
    if(i>=n)return 0;
    return f(i+arr[i],arr,n)+1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<f(0,a,n)<<endl;
    return 0;
}
