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
int dp[2][MAX_V+5];
int main(){
    int V,n;
    cin>>V>>n;
    for(int i=1,w,v;i<=n;i++){
        cin>>w>>v;
        int ind=i%2;
        int pre_ind=!ind;
        for(int j=1;j<=V;j++){
            dp[ind][j]=dp[pre_ind][j];
            if(j>=w)dp[ind][j]=max(dp[pre_ind][j-w]+v,dp[ind][j]);
        }
    }
    cout<<dp[n%2][V]<<endl;
    return 0;
}
