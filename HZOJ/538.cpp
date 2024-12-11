/*************************************************************************
	> File Name: 538.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Mon 13 May 2024 09:48:52 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 25
int G[MAX_N][MAX_N];
int Nv;
int vd[MAX_N];
void dfs(int n){
    for(int i=1;i<=Nv;i++){
        if(!vd[i] && G[n][i]){
            cout<<"-"<<i;
            vd[i]=1;
            dfs(i);
        }
    }
    return ;
}
int main(){
    cin>>Nv;
    for(int i=1;i<=Nv;i++){
        for(int j=1;j<=Nv;j++)
            cin>>G[i][j];
    }
    for(int i=1;i<=Nv;i++)
        vd[i]=0;
    vd[1]=1;
    cout<<"1";
    dfs(1);
    for(int i=1;i<=Nv;i++){
        if(!vd[i]){
            cout<<"-"<<i;
            vd[i]=1;
            dfs(i);
        }
    }
    cout<<endl;
    return 0;
}
