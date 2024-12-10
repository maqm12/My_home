/*************************************************************************
	> File Name: P1028.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Mon 09 Dec 2024 07:56:30 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 1000
int f[MAX_N+5]={0};
int main(){
    int n;
    cin>>n;
    f[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=i/2;j>0;j--){
            f[i]+=f[j];
        }
        f[i]+=1;
    }
    cout<<f[n]<<endl;
    return 0;
}
