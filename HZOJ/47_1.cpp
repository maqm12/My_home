/*************************************************************************
	> File Name: 47.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Wed 11 Dec 2024 08:34:35 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 100
#define MAX_V 10000
#define MAX_W 100000
int v[MAX_N+5];
int w[MAX_N+5];
int dp[MAX_N+5][MAX_V+5];
int main(){
    int V,n;
    cin>>V>>n;
    for(int i=1;i<=n;i++){
        cin>>w[i]>>v[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=V;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=w[i])dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i][j]);
        }
    }
    cout<<dp[n][V]<<endl;
    return 0;
}
