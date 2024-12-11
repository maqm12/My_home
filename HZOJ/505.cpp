/*************************************************************************
	> File Name: 505.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Wed 30 Oct 2024 10:18:00 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(const string &a,const string &b){
    return a+b>b+a;
}
int main(){
    vector<string> arr;
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        arr.push_back(s);
    }
    sort(arr.begin(),arr.end(),cmp);
    for(int i=0;i<n;i++)
        cout<<arr[i];
    cout<<endl;
    return 0;
}
