/*************************************************************************
	> File Name: P1044.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Mon 09 Dec 2024 10:23:32 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 18
int f[MAX_N+5];
int main(){
    int n;
    cin>>n;
    f[0]=1;
    f[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            f[i]+=f[j-1]*f[i-j];
        }
    }
    cout<<f[n]<<endl;
    return 0;
}
