/*************************************************************************
	> File Name: 599.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Fri 06 Dec 2024 02:30:41 PM CST
 ************************************************************************/

#include<cstdio>
#include<unordered_map>
using namespace std;
int n,t,arr[1000005];
unordered_map<int,int> m;
int main(){
    scanf("%d%d",&n,&t);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        m[arr[i]]=i;
    }
    for(int i=0;i<n;i++){
        if(m.find(t-arr[i])!=m.end()){
            printf("%d %d\n",i,m[t-arr[i]]);
            return 0;
        }
    }
    return 0;
}
