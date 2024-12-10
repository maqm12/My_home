/*************************************************************************
	> File Name: P1605.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Wed 23 Oct 2024 06:42:40 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 5
int map[MAX_N+5][MAX_N+5]={0};
int dir[4][2]={
    {1,0},{-1,0},
    {0,1},{0,-1}
};
int n,m,t;
int x1,y1,x2,y2;
int ans=0;
void dfs(int x,int y){
    if(x==x2 &&y==y2){
        ans+=1;
        return ;
    }
    map[x][y]=0;
    for(int i=0;i<4;i++){
        int dx=x+dir[i][0];
        int dy=y+dir[i][1];
        if(!map[dx][dy])continue;
        dfs(dx,dy);
    }
    map[x][y]=1;
    return ;
}
int main(){
    cin>>n>>m>>t;
    cin>>x1>>y1>>x2>>y2;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            map[i][j]=1;
    for(int i=1,x,y;i<=t;i++){
        cin>>x>>y;
        map[x][y]=0;
    }
    dfs(x1,y1);
    cout<<ans<<endl;
    return 0;
}
