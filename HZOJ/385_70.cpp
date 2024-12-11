/*************************************************************************
	> File Name: 385.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Fri 06 Dec 2024 10:47:51 AM CST
 ************************************************************************/

#include<iostream>
#include<queue>
#define MAX_N 100000
int ans=0;
int mark[MAX_N+5]={0};
using namespace std;
struct node{
    int t;
    int c;
};
int main(){
    queue<node> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t,k;
        cin>>t>>k;
        for(int j=0;j<k;j++){
            int m;
            cin>>m;
            if(mark[m]==0)ans++;
            mark[m]++;
            q.push((node){t,m});
        }
        while(t-q.front().t>=86400){
            if(--mark[q.front().c]==0)ans--;
            q.pop();
        }
        cout<<ans<<endl;
    }
    return 0;
}
