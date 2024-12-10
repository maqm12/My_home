/*************************************************************************
	> File Name: P1009.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Tue 10 Dec 2024 06:14:08 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
#define MAX_N 50
class BigInt:public vector<int>{
public:
    BigInt(){push_back(0);}
    BigInt(int x){
        push_back(x);
        process_digit();
        return ;
    }
    BigInt &operator*=(int x){
        for(int i=0;i<size();i++){
            at(i)*=x;
        }
        process_digit();
        return *this;
    }
    BigInt &operator+=(const BigInt &a){
        for(int i=0;i<a.size();i++){
            if(i>=size())push_back(a[i]);
            else at(i)+=a[i];
        }
        process_digit();
        return *this;
    }
private:
    void process_digit(){
        for(int i=0;i<size();i++){
            if(at(i)<10)continue;
            if(i+1==size())push_back(0);
            at(i+1)+=at(i)/10;
            at(i)%=10;
        }
    }
};
ostream &operator<<(ostream &out,const BigInt &a){
    for(int i=a.size()-1;i>=0;i--){
        out<<a[i];
    }
    return out;
}
BigInt arr[MAX_N+5];
int main(){
    int n;
    cin>>n;
    BigInt t=1,ans=0;
    for(int i=1;i<=n;i++){
        t*=i;
        ans+=t;
    }
    cout<<ans<<endl;
    return 0;
}

