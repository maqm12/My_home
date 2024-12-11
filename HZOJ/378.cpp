/*************************************************************************
	> File Name: 378.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Wed 04 Dec 2024 12:00:36 PM CST
 ************************************************************************/

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack<char> t;
    string s;
    cin>>s;
    for(int i=0;s[i]!='@';i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            t.push(s[i]);
        }
            if(s[i]==')'){
                if(t.empty()){
                    cout<<"NO"<<endl;
                    return 0;
                }
                else{
                    if(t.top()=='(')t.pop();
                    else{
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
            }
            if(s[i]==']'){
                if(t.empty()){
                    cout<<"NO"<<endl;
                    return 0;
                }
                else{
                    if(t.top()=='[')t.pop();
                    else{
                        cout<<"NO"<<endl;
                        return 0;
                        }
                }
            }
            if(s[i]=='}'){
                if(t.empty()){
                    cout<<"NO"<<endl;
                    return 0;
                    }
                else{
                    if(t.top()=='{')t.pop();
                    else{
                        cout<<"NO"<<endl;
                        return 0;
                         }
                }
            }
   }
    if(t.empty())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
