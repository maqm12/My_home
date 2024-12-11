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
int dp[MAX_V+5];
int main(){
    int V,n;
    cin>>V>>n;
    for(int i=1,w,v;i<=n;i++){
        cin>>w>>v;
        for(int j=V;j>=w;j--){
            dp[j]=max(dp[j-w]+v,dp[j]);
        }
    }
    cout<<dp[V]<<endl;
    return 0;
}
