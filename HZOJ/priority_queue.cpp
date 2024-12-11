/*************************************************************************
	> File Name: priority_queue.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Wed 04 Dec 2024 09:53:15 PM CST
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> q;
    q.push(2);
    q.push(3);
    q.push(0);
    cout<<q.top()<<endl;
    return 0;
}

