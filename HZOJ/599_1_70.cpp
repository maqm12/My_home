/*************************************************************************
	> File Name: 599.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Fri 06 Dec 2024 02:30:41 PM CST
 ************************************************************************/

#include<cstdio>
using namespace std;
int n,t,arr[1000005];
int main(){
    scanf("%d%d",&n,&t);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==t){
                printf("%d %d\n",i,j);
                return 0;
            }
        }
    }
    return 0;
}
