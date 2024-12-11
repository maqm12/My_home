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
    for(int i=0;i<n;i++){
        int l=i,r=n-1;
        int tt=t-arr[i];
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[i]+arr[mid]==t){
                printf("%d %d\n",i,mid);
                return 0;
            }
            else if(arr[mid]>tt){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
    }
    return 0;
}
