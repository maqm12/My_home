/*************************************************************************
	> File Name: P1101.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Sun 27 Oct 2024 09:53:04 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 100
int n;
char g[MAX_N+5][MAX_N+5]={0};
int ans[MAX_N+5][MAX_N+5]={0};
int dir[8][2]={
    {1,0},{-1,0},{0,1},{0,-1},
    {1,1},{-1,-1},{-1,1},{1,-1}
};
int vis[MAX_N+5][MAX_N+5]={0};
char match[8]="yizhong";
void get_ans(int x,int y){
    for(int i=0;i<8;i++){
        int flag=1;
        for(int j=0;match[j];j++){
            int dx=x+j*dir[i][0];
            int dy=y+j*dir[i][1];
            if(match[j]==g[dx][dy])continue;
            flag=0;
            break;
        }
        if(flag){
            for(int k=0;match[k];k++){
                int dx=x+k*dir[i][0];
                int dy=y+k*dir[i][1];
                ans[dx][dy]=1;
            }
        }
    }
    return ;
}
void dfs(int i,int j){
    if(g[i][j]=='y'){
        get_ans(i,j);
    }
    if(g[i][j]==0)return ;
    if(vis[i][j])return ;
    vis[i][j]=1;
    dfs(i,j+1);
    dfs(i+1,j);
    return ;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>(g[i]+1);
    dfs(1,1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(ans[i][j])cout<<g[i][j];
            else cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

