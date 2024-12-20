/*************************************************************************
	> File Name: P1032.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Sat 26 Oct 2024 10:45:03 PM CST
 ************************************************************************/

#include<iostream>
#include<map>
using namespace std;
#define MAX_NUM 100
string a,b;
string from[10],to[10];
int trans_cnt=0;
int ans=MAX_NUM,ans_k;
map<string,int> dp;
void dfs(string now,int step){
    if(step>ans_k)return ;
    if(step>10)return ;
    dp[now]=step;
    if(now == b){
        ans=step;
        return ;
    }
    for(int i=0;i<trans_cnt;i++){
        int pos=now.find(from[i]);
        while(pos != -1){
            string changed = now;
            changed.erase(pos,from[i].size());
            changed.insert(pos,to[i]);
            if(dp.find(changed) == dp.end() || dp[changed] > step+1)
                dfs(changed,step+1);
            pos=now.find(from[i],pos+1);
        }
    }
    return ;
}
int main(){
    cin>>a>>b;
    while(cin>>from[trans_cnt]>>to[trans_cnt])trans_cnt++;
    for(int i=1;i<=10;i++){
        ans_k=i;
        dp.clear();
        dfs(a,0);
        if(ans != MAX_NUM)break;
    }
    if(ans == MAX_NUM)cout<<"NO ANSWER!"<<endl;
    else cout<<ans<<endl;
    return 0;
}
