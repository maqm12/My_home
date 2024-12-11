/*************************************************************************
	> File Name: 42.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Sun 08 Dec 2024 05:19:32 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int dp[25][10005]={0};
int val[25]={0};
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        cin>>val[i];
    }
    for(int i=1;i<=m;i++){
        dp[i][0]=1;
        for(int j=1;j<=n;j++){
            if(val[i]>j)dp[i][j]=dp[i-1][j];
            else{
                dp[i][j]=dp[i-1][j]+dp[i][j-val[i]];
            }
            dp[i][j]%=9973;
        }
    }
    cout<<dp[m][n]<<endl;
    return 0;
}
