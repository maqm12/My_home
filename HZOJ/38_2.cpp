/*************************************************************************
	> File Name: 38_2.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Sun 08 Dec 2024 03:55:43 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> f(n+1);
    f[0]=f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    cout<<f[n]<<endl;
    return 0;
}

