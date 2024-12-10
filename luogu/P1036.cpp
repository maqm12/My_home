/*************************************************************************
	> File Name: P1036.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Tue 22 Oct 2024 11:35:28 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 20
int val[MAX_N+5];
long long ans=0;
int is_prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
void dfs(int k,int ind,int n,int m,int sum){
    if(k==m){
        if(is_prime(sum))ans++;
        return ;
    }
    for(int i=ind;i<=n;i++){
        dfs(k+1,i+1,n,m,sum+val[i]);
    }
    return ;
}
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>val[i];
    dfs(0,1,n,k,0);
    cout<<ans<<endl;
    return 0;
}
