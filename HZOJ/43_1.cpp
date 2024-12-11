/*************************************************************************
	> File Name: 43.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Wed 11 Dec 2024 04:51:56 PM CST
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
    for(int i=1;i<=n;i++)f[n%2][i]=val[n][i];
    for(int i=n-1;i>=1;i--){
        int ind=i%2;
        int pre_ind=!ind;
        for(int j=1;j<=i;j++){
            f[ind][j]=max(f[pre_ind][j],f[pre_ind][j+1])+val[i][j];
        }
    }
    printf("%d\n",f[1][1]);
    return 0;
}

