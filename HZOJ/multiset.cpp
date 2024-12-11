/*************************************************************************
	> File Name: multiset.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Wed 04 Dec 2024 10:06:13 PM CST
 ************************************************************************/

#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> s;
    s.insert(1);
    s.insert(0);
    s.insert(9);
    s.insert(2);
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
    //cout<<*(s.end());
    return 0;
}
