/*************************************************************************
	> File Name: 43_2.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Wed 11 Dec 2024 05:15:23 PM CST
 ************************************************************************/

#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX_N 1000
int val[MAX_N+5][MAX_N+5];
int f[2][MAX_N+5];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            scanf("%d",&val[i][j]);
        }
    }
    f[1][1]=val[1][1];
    for(int i=2;i<=n;i++){
        int ind=i%2;
        int pre_ind=!ind;
        for(int j=1;j<=i;j++){
            f[ind][j]=max(f[pre_ind][j-1],f[pre_ind][j])+val[i][j];
        }
    }
    int ans=0;
    for(int j=1;j<=n;j++){
        if(f[n%2][j]>ans)ans=f[n%2][j];
    }
    printf("%d\n",ans);
    return 0;
}

