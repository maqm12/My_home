/*************************************************************************
	> File Name: P1057.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Tue 10 Dec 2024 07:37:28 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_M 30
#define MAX_N 30
int f[MAX_M+5][MAX_N+5];
int main(){
    int n,m;
    cin>>n>>m;
    f[0][1]=1;
    for(int i=1;i<=m;i++){
        for(int j=2;j<=n-1;j++){
            f[i][j]=f[i-1][j-1]+f[i-1][j+1];
        }
        f[i][1]=f[i-1][n]+f[i-1][2];
        f[i][n]=f[i-1][n-1]+f[i-1][1];
    }
    cout<<f[m][1]<<endl;
    return 0;
}
