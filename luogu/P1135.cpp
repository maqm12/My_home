/*************************************************************************
	> File Name: P1135.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Tue 22 Oct 2024 11:09:50 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 200
int to[MAX_N];
int dis[MAX_N];
void dfs(int k,int a,int n){
    if(k>=dis[a])return ;
    dis[a]=k;
    if(a+to[a]<=n)dfs(k+1,a+to[a],n);
    if(a-to[a]>=1)dfs(k+1,a-to[a],n);
    return ;
}
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++)dis[i]=n+1;
    for(int i=1;i<=n;i++)cin>>to[i];
    dfs(0,a,n);
    cout<<(dis[b]==n+1 ? -1 :dis[b])<<endl;
    return 0;
}
