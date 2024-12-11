/*************************************************************************
	> File Name: 384.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Fri 06 Dec 2024 07:55:03 AM CST
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;
bool is_val(int n){
    if(n%7==0)return false;
    while(n!=0){
        int t=n%10;
        if(t==7)return false;
        n/=10;
    }
    return true;
}
int main(){
    queue<int> q;
    int n,x,t;
    cin>>n>>x>>t;
    int now=t;
    for(int i=x;i<x+n;i++){
        q.push((i)%n);
    }
    while(q.size()!=1){
        int t=q.front();
        q.pop();
        if(is_val(now))q.push(t);
        now++;
    }
    cout<<q.front()<<endl;
    return 0;
}
