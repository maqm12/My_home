/*************************************************************************
	> File Name: P1025.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Sun 08 Dec 2024 10:07:27 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 200
#define MAX_K 6
int f[MAX_N+5][MAX_K+5];
int main(){
    int n,k;
    cin>>n>>k;
    f[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1,J=min(k,i);j<=J;j++){
            f[i][j]=f[i-1][j-1]+f[i-j][j];
        }
    }
    cout<<f[n][k]<<endl;
    return 0;
}
