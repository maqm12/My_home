/*************************************************************************
	> File Name: P2404.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Sun 27 Oct 2024 08:34:27 AM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
#define MAX_N 100
int ans[MAX_N]={0};
int n;
void dfs(int k,int step,int sum){
    if(sum==n){
        for(int i=0;i<step;i++){
            if(i==step-1)cout<<ans[i]<<endl;
            else cout<<ans[i]<<"+";
        }
        return ;
    }
    if(sum>n){
        return ;
    }
    for(int i=k;i<n;i++){
        ans[step]=i;
        dfs(i,step+1,sum+i);
    }
    return ;
}
int main(){
    cin>>n;
    dfs(1,0,0);
    return 0;
}
