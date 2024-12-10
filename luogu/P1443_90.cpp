/*************************************************************************
	> File Name: P1443.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Wed 23 Oct 2024 12:53:12 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 400
int dis[MAX_N+5][MAX_N+5];
int dir[8][2]={
    {2,1},{2,-1},{1,2},{1,-2},
    {-2,1},{-2,-1},{-1,2},{-1,-2}
};
int n,m;
void dfs(int k,int x,int y){
    if(dis[x][y]!=-1 && k>=dis[x][y]){
        return ;
    }
    dis[x][y]=k;
    for(int i=0;i<8;i++){
        int dx=x+dir[i][0];
        int dy=y+dir[i][1];
        if(dx<1 || dx>n)continue;
        if(dy<1 || dy>m)continue;
        dfs(k+1,dx,dy);
    }
    return ;
}
int main(){
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            dis[i][j]=-1;
    dfs(0,x,y);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cout<<dis[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
