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
    int l=0,r=n-1;
    while(l<r){
        if(arr[l]+arr[r]==t){
            printf("%d %d\n",l,r);
            return 0;
        }
        if(arr[l]+arr[r]>t){
            r--;
        }
        else{
            l++;
        }
    }
    return 0;
}
