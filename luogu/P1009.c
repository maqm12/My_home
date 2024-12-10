/*************************************************************************
	> File Name: P1009.c
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Fri 03 May 2024 10:54:32 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdio.h>
long long func(int n){
if(n==1)return 1;
else return n*func(n-1);
}
long long sum(int n){
if(n==1)return 1;
else return func(n)+sum(n-1);
}
int main(){
int n;char s[100];
scanf("%d",&n);
    printf("%lld\n",sum(n));
return 0;
}
