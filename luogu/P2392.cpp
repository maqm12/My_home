/*************************************************************************
	> File Name: P2392.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Sun 27 Oct 2024 10:31:41 AM CST
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#define MAX_N 20
#define MAX_NUM 99999
int s[10]={0};
int ans=0;
int t[10][MAX_N+5]={0};
void dfs(int k,int x,int l,int r){
    if(k==s[x]){
        ans=min(ans,max(l,r));
        return ;
    }
    l+=t[x][k];
    dfs(k+1,x,l,r);
    l-=t[x][k];
    r+=t[x][k];
    dfs(k+1,x,l,r);
    r-=t[x][k];

}
int main(){
    for(int i=0;i<4;i++)
        cin>>s[i];
    for(int i=0;i<=4;i++)
        for(int j=0;j<s[i];j++)
            cin>>t[i][j];
    int total=0;
    for(int i=0;i<4;i++){
        ans=MAX_NUM;
        dfs(0,i,0,0);
        total+=ans;
    }
    cout<<total<<endl;
    return 0;
}
