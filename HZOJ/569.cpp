/*************************************************************************
	> File Name: 569.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Thu 05 Dec 2024 12:22:28 PM CST
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
struct liquid{
    int v;
    double c;
};
int main(){
    stack<liquid> s;
    int v0;
    double c0;
    cin>>v0>>c0;
    s.push((liquid){v0,c0});
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if(c=='P'){
            int p;
            double q;
            cin>>p>>q;
            int tv=s.top().v;
            double tc=s.top().c;
            s.push((liquid){p+tv,(tv*tc+p*q)/(tv+p)});
        }
        if(c=='Z'){
            if(s.size()!=1)
                s.pop();
        }
        printf("%d %.5f\n",s.top().v,s.top().c);
        }
    return 0;
}
