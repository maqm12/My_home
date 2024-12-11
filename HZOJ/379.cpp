/*************************************************************************
	> File Name: 379.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Wed 04 Dec 2024 09:46:46 PM CST
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> sta;
    stack<int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int o;
        cin>>o;
        if(o==0){
            int num;
            cin>>num;
            sta.push(num);
            if(m.empty())m.push(num);
            else{
                if(m.top()>num)m.push(m.top());
                else m.push(num);
            }
        }
        if(o==1 && !sta.empty()){
            int t=sta.top();
            sta.pop();
            m.pop();
        }
        if(o==2){
            if(sta.empty())cout<<0<<endl;
            else{
                cout<<m.top()<<endl;
            }
        }
    }
    return 0;
}

