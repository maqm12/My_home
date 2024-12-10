/*************************************************************************
	> File Name: P1443.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Wed 23 Oct 2024 12:53:12 PM CST
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;
#define MAX_N 400
int dis[MAX_N+5][MAX_N+5];
int dir[8][2]={
    {2,1},{2,-1},{1,2},{1,-2},
    {-2,1},{-2,-1},{-1,2},{-1,-2}
};
struct Point{
    Point(int x,int y,int s):x(x),y(y),s(s){}
    int x;
    int y;
    int s;
};
int n,m;
void bfs(int k,int x,int y){
    queue<Point> p;
    p.push(Point(x,y,0));
    dis[x][y]=0;
    while(!p.empty()){
        Point now=p.front();
        p.pop();
        for(int i=0;i<8;i++){
            int dx=now.x+dir[i][0];
            int dy=now.y+dir[i][1];
            if(dx < 1 || dx > n)continue;
            if(dy < 1 || dy > m)continue;
            if(dis[dx][dy]!=-1)continue;
            p.push(Point(dx,dy,now.s+1));
            dis[dx][dy]=now.s+1;
        }
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
    bfs(0,x,y);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cout<<dis[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
