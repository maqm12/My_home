/*************************************************************************
	> File Name: P1038.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Mon 09 Dec 2024 08:46:04 PM CST
 ************************************************************************/

#include<iostream>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 100
int c[MAX_N+5],u[MAX_N+5];
int w[MAX_N+5][MAX_N+5];
int indeg[MAX_N+5],outdeg[MAX_N+5];
vector<int> g[MAX_N+5];
int main(){
    int n,p;
    cin>>n>>p;
    for(int i=1;i<=n;i++){
        cin>>c[i]>>u[i];
        if(c[i]==0)c[i]-=u[i];
    }
    for(int i=0,a,b,W;i<p;i++){
        cin>>a>>b>>W;
        w[a][b]=W;
        indeg[b]++;
        outdeg[a]++;
        g[a].push_back(b);
    }
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(indeg[i])continue;
        q.push(i);
    }
    while(!q.empty()){
        int ind=q.front();
        q.pop();
        if(c[ind]>0){
            for(int i=0;i<g[ind].size();i++){
                int to=g[ind][i];
                c[to]+=w[ind][to]*c[ind];
            }
        }
        for(int i=0;i<g[ind].size();i++){
            int to=g[ind][i];
            indeg[to]--;
            if(indeg[to]==0){
                q.push(to);
            }
        }
    }
    int flag=0;
    for(int i=1;i<=n;i++){
        if(outdeg[i])continue;
        if(c[i]<=0)continue;
        cout<<i<<" "<<c[i]<<endl;
        flag=1;
    }
    if(flag==0)cout<<"NULL"<<endl;
    return 0;
}
